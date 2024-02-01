//
//  main.c
//  逆序输出
//
//  Created by 我爱吃糖 on 2024/2/1.
//

#include<stdio.h>
int main()
{
    int arr[10] = {0};
    for(int i = 9;i>=0;i--)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
