//
//  main.c
//  *
//
//  Created by 我爱吃糖 on 2024/1/21.
//

#include <stdio.h>

int main()
{
    int n ;
    while(scanf("%d", &n)!=EOF)
    {
        for(int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
