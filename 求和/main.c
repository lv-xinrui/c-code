//
//  main.c
//  求和
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//  Created by 我爱吃糖 on 2024/1/26.
//

#include <stdio.h>

int main()
{
    double sum = 0;
    int flag = 1;
    for (int i = 1; i<=100; i++)
    {
        sum += 1.0/i*flag;
        flag = -flag;
    }
    printf("%f\n",sum);
    
    return 0;
}
