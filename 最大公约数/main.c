//
//  main.c
//  最大公约数
//
//  Created by 我爱吃糖 on 2024/1/28.
//

#include <stdio.h>

int main()
{
    int a ,b ,c = 0;
    printf("请输入两个数：");
    scanf("%d %d",&a,&b);
    
    c = a%b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a%b;
    }
    printf("最大公约数为：%d\n",b);
    return 0;
}
