//
//  main.c
//  有序序列插入一个整数
//  有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序
//  Created by 我爱吃糖 on 2024/2/19.
//第一行输入一个整数N(0≤N≤50)。
//
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
//
//第三行输入想要进行插入的一个整数。


#include<stdio.h>

int main()
{
    int n =0,m=0,i=0;
    int arr[50]={0};
    scanf("%d",&n);
    //读入数组
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    i=0;
    //插入数前，i!=n不能漏，漏了就可能越界
    while(arr[i]<m && i!=n)
    {
        printf("%d ",arr[i]);
        i++;
    }
    //插入数时
    printf("%d ",m);
    //插入数后
    while(i!=n)
    {
        printf("%d ",arr[i]);
        i++;
    }
    return 0;
}
