# coding: gb2312

list_a = ["��"]
list_b = ["С"]
list_c = list_a + list_b
list_d = [1,3,5,10]

#֧�ֳ�����ȵ�
def compare_str_gb2312(str1, str2, len):
    for i in range(len):
        num0 = str1.encode("gb2312")[0]*256 + str1.encode("gb2312")[1];
        num1 = str2.encode("gb2312")[0]*256 + str2.encode("gb2312")[1];
        if num0 <= num1:
            return 1
            pass
        else:
            return 0
            pass
        pass
    pass

#�������� Դ ˳��  �Զ���ȽϷ���
def insert_sort(listd, value):
    for i in range(len(listd)):
        if value <= listd[i]:
            listd.insert(i,value)
            return 
            pass
        pass
    listd.append(value)
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




insert_sort2(list_a, "��")
insert_sort2(list_a, "��")
insert_sort2(list_a, "��")
print(list_a)
for i in range(len(list_a)):
    print(list_a[i].encode("gb2312")[0]*256 + list_a[i].encode("gb2312")[1], end='\t')