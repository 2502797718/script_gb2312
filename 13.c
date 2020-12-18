#include<stdio.h>
#include<stdlib.h>
#include"font_gb2312.h"

int a[10] = {3,2,5,9,1,4,6,5,9,8};

void merge_sort(int arr[], int len);
int min(int x, int y);

void main()
{
	unsigned char *pBuff;
    int i = 0;

    printf("%ld\n",sizeof(font_12)/sizeof(font_gb2312));
    merge_sort(a,10);
    for(i=0;i<10;i++)
    {
        printf("%d\t",*(a+i));
    }
}

int min(int x, int y) {
    return x < y ? x : y;
}

void merge_sort(int arr[], int len) {
    int *a = arr;
    int *b = (int *) malloc(len * sizeof(int));
    int seg, start;
    for (seg = 1; seg < len; seg += seg) 
    {
        for (start = 0; start < len; start += seg * 2) 
        {
            int low = start, mid = min(start + seg, len), high = min(start + seg * 2, len);  //总数组中切一块
            int k = low;
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high; //切块再分成两个小块
            while (start1 < end1 && start2 < end2)
                b[k++] = ( a[start1] < a[start2] ? a[start1++] : a[start2++] );
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        int *temp = a;
        a = b;
        b = temp;
    }
    if (a != arr) 
    {
        int i;
        for (i = 0; i < len; i++)
            b[i] = a[i];
        b = a;
    }
    free(b);
}