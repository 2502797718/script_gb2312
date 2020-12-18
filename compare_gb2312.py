# coding: gb2312

list_a = ["大"]
list_b = ["小"]


#支持长度相等的
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

print(list_a[0].encode("gb2312")[0]*256 + list_a[0].encode("gb2312")[1])
print(list_b[0].encode("gb2312")[0]*256 + list_b[0].encode("gb2312")[1])
print(compare_str_gb2312(list_a[0], list_b[0], 1))