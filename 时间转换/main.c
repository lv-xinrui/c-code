//
//  main.c
//  时间转换
//
//  Created by 我爱吃糖 on 2024/2/24.
//  给定秒数 seconds ，把秒转化成小时、分钟和秒。


#include <stdio.h>
int main()
{
    int h,m,s;
    scanf("%d",&s);
    h=s/60/60;//计算小时
    m=s/60%60;//计算分(取模就是去掉转换成小时的分钟数）
    s=s%60;//计算秒数
    printf("%d %d %d",h,m,s);
    return 0;
}

