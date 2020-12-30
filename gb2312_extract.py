# coding : gb2312
# 排序 gb2312code h*256+l 
import os
import ctypes  #引用C文件


def byte_strhex(b1):
    a = int.from_bytes(b1, byteorder='big', signed=False)
    a = hex(a)
    return str(a)
   
#搜索指定元素
def search(list_str, str):
    count = 0
    for i in range(len(list_str)):
        count += list_str[i].count(str)
        pass
    return count

'''
鏋勯�犳暟缁?
{
    char p[2];
    char font[24];
}

'''
def create_c_struct_head(fpx): 
    fpx.write("#ifndef __FONT") 
    fpx.write('\n')       
    fpx.write("#define __FONT")  
    fpx.write("\n\n")
    fpx.write("typedef struct _font_gb2312")
    fpx.write('\n')
    fpx.write('{')
    fpx.write("\n\t")
    fpx.write("unsigned char *p;")
    fpx.write("\n\t")
    fpx.write("unsigned char font[24];")
    fpx.write("\n")
    fpx.write("} font_gb2312;")
    fpx.write('\n')
    fpx.write('\n')
    fpx.write("font_gb2312 font_12[] =")
    fpx.write('\n')
    fpx.write('{')
    pass

def create_c_struct_body(fpx, point, p): 
    fpx.write('\n')
    fpx.write('\t')
    fpx.write('{')
    fpx.write('\n\t\t')
    fpx.write(".p = ")
    fpx.write('"')
    fpx.write(p)
    fpx.write('"')
    fpx.write(',')
    fpx.write('\n\t\t')
    fpx.write(".font = ")
    fpx.write('\n')
    list_arry = []
    fpx.write('\t\t')
    fpx.write('{')
    fpx.write('\n\t\t\t')
    for i in range(12):
        list_arry.append(byte_strhex(point.contents[i]))
        pass
    fpx.write(','.join(list_arry))
    fpx.write(',')
    fpx.write('\n\t\t\t')
    list_arry = []
    for i in range(12,24):
        list_arry.append(byte_strhex(point.contents[i]))
        pass
    fpx.write(','.join(list_arry))
    fpx.write(',')
    fpx.write('\n\t\t')
    fpx.write('}')
    fpx.write(',')
    fpx.write('\n\t')
    fpx.write('}')
    fpx.write(',')
    pass
def create_c_struct_end(fpx):
    fpx.write('\n')
    fpx.write("};") 
    fpx.write('\n')
    fpx.write('\n')
    fpx.write("#endif") 
    fpx.write('\n')
    pass

def compare_str_gb2312(str1, str2, len):
    for i in range(len):
        num0 = str1.encode("gb2312")[0]*256 + str1.encode("gb2312")[1];
        num1 = str2.encode("gb2312")[0]*256 + str2.encode("gb2312")[1];
        if num0 < num1:
            return 1
            pass
        else:
            return 0
            pass
        pass
    pass


def insert_sort2(listd, value):
    for i in range(len(listd)):
        if compare_str_gb2312(value,listd[i],1):
            listd.insert(i,value)
            return 
            pass
        pass
    listd.append(value)
    pass


#打开对应文件
os.system("gcc -shared -Wl,-soname,adder -o GB2312_12.so -fPIC ./GB2312_12_12.c")  #缂栬瘧 璋冪敤C鍑芥暟
fp = open("./11.txt",encoding="gb2312")
fp1 = open("./font_gb2312.h","w",encoding="gb2312")
GB2312_12 = ctypes.CDLL("./GB2312_12.so")  

#构建数组
buff_type = ctypes.c_char*24
buff = buff_type()
point_buff = ctypes.pointer(buff)  


#鍘婚噸
charact_w = []
characters = fp.readlines()
for i in range(len(characters)):
    for j in range(len(characters[i])):
        if search(charact_w, characters[i][j]) == 0:
            if characters[i][j] == '\n':
                continue
            insert_sort2(charact_w, characters[i][j])
            #charact_w.append(characters[i][j])
            pass
        pass
    pass


create_c_struct_head(fp1)
for i in range(len(charact_w)):
    if charact_w[i] == '\n':
        continue
    GB2312_12.GetFontGb2312_12_12(charact_w[i].encode("gb2312"),point_buff)   #ok
    create_c_struct_body(fp1, point_buff,charact_w[i])
    pass
create_c_struct_end(fp1)
fp1.close()


print(len(charact_w))
print(charact_w)

for i in range(len(charact_w)):
    print(charact_w[i].encode("gb2312")[0]*256 + charact_w[i].encode("gb2312")[1], end='\t')
