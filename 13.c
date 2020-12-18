#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"font_gb2312.h"


/*
*brief:二分法查找指定列表中指定元素  要求顺序表
*parameter :list ==> 列表指针
            len  ==> 列表长度
            val  ==> 查找对象
*/
uint16_t dichotomy(void* list, uint16_t len, void * val1);

void main()
{
    unsigned char *pBuff;
    font_gb2312 * p_font;
    uint8_t * p_str = "↓";
    int i = 0;
    char j = 200;
    int a[] = {0,1,2,3,4,5,7,8,9,12};

    p_font = font_12;
    u_int16_t len = sizeof(font_12)/sizeof(font_gb2312);
    printf("%ld\n",sizeof(font_12)/sizeof(font_gb2312));

    i = dichotomy(font_12, len, p_str);
    printf("%d \n",i);

}

/*
uint16_t dichotomy(void* list1, uint16_t len, void * val1)
{
    u_int16_t middle = len / 2;
    u_int16_t low = 0;
    u_int16_t high = len-1;
    int val = *(int*)val1;
    int *list = (int*)list1;

    while(high != low)
    {
        if(val > list[middle])
        {
            low = middle+1;
            middle = ( high + low ) >> 1; 
        }
        else if(val < list[middle])
        {
            high = middle-1;
            middle = ( high + low ) >> 1; 
        }
        else
        {
            return middle;
        }
        
    }
    return len;

}
*/

uint16_t dichotomy(void* list1, uint16_t len, void * val1)
{
    u_int16_t middle = len / 2;
    u_int16_t low = 0;
    u_int16_t high = len-1;
    uint8_t* val = (uint8_t*)val1;
    font_gb2312 *list = (font_gb2312*)list1;

    uint32_t val_num = val[0]*256+val[1];
    uint32_t high_num = list[high].p[0]*256+list[high].p[1];
    uint32_t middle_num = list[middle].p[0]*256+list[middle].p[1];
    uint32_t low_num = list[low].p[0]*256+list[low].p[1];


    printf("%d\n",val_num);
    while(high != low)
    {
        if(val_num > middle_num)
        {
            low = middle+1;
            low_num = list[low].p[0]*256+list[low].p[1];
            middle = ( high + low ) >> 1; 
            middle_num = list[middle].p[0]*256+list[middle].p[1];
        }
        else if(val_num < middle_num)
        {
            high = middle-1;
            high_num = list[high].p[0]*256+list[high].p[1];
            middle = ( high + low ) >> 1; 
            middle_num = list[middle].p[0]*256+list[middle].p[1];
        }
        else
        {
            return middle;
        }
        
    }
    if(middle_num == val_num)
    {
        return middle;
    }
    return len;

}

