//
//  main.c
//  9*9乘法口诀表
//
//  Created by 我爱吃糖 on 2024/1/22.
//

#include <stdio.h>

int main()
{
    int i=0,j=0;
    for (i=1; i<10; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d*%d=%d ",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
