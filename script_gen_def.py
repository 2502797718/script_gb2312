# encoding=gb2312

import os


fp_headfile = open("./headfile.txt", encoding="gb2312", mode="w")
num = 0

fp_headfile.write("#define\tSET_PROGRAMABLE_SETTING_x_x_x_x_BASE"+"\t\t 349"+'\n')
for i in range(5):
    for j1 in range(2):
        for j2 in range(22):
            fp_headfile.write("#define\tSET_PROGRAMABLE_SETTING_2_"+str(i+1)+"_"+str(j1+4)+"_"+str(j2+1))
            fp_headfile.write("\t\tSET_PROGRAMABLE_SETTING_x_x_x_x_BASE + " + str(num) + '\n')
            num = num + 1
            pass
        fp_headfile.write('\n')
        pass
    pass
fp_headfile.write('\n')
fp_headfile.write("//----------生成表---------------\n")
num = 349
num_current = 1080
for i in range(5):
    for j1 in range(2):
        fp_headfile.write("//-----------------------------------\n")
        for j2 in range(22):
            fp_headfile.write("{" + str(num_current) + ", " + str(num_current-1) + ", " + str(num_current+1)+ ", " + str(num_current))
            fp_headfile.write(", SET_PROGRAMABLE_SETTING_2_"+str(i+1)+"_"+str(j1+4)+"_"+str(j2+1) + ",\t\t\t")
            fp_headfile.write(str(num) + ',' + "(*Dis_Set_ProgramableSetting)},\n")
            num = num + 1
            num_current = num_current + 1
            pass
        fp_headfile.write('\n')
        num_current = num_current + 1
        pass
    pass

fp_headfile.close()