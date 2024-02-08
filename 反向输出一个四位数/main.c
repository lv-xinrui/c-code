//
//  main.c
//  反向输出一个四位数
//
//  Created by 我爱吃糖 on 2024/2/8.
//

#include<stdio.h>
int main()
{
    int a = 0;
    scanf("%d", &a);
    while (a)
    {
        printf("%d",a%10);
        a = a /10;
    }
    printf("\n");
    return 0;
}
