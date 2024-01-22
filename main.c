//
//  main.c
//  打印1～100间奇数
//
//  Created by 我爱吃糖 on 2024/1/22.
//

#include <stdio.h>

int main()
{
    int i=1;
    for (i=1; i<=100; i++)
    {
        if (i%2==1)
        {
            printf("%d  ",i);
        }
    }
    return 0;
}

