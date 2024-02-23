//
//  main.c
//  N个数之和
//
//  Created by 我爱吃糖 on 2024/2/23.
//

#include<stdio.h>
int main()
{
    int n  = 0;
    int sum = 0;
    int ret = 0;
    scanf("%d",&n);
        for(int i = 0;i<n;i++)
        {
            scanf("%d",&ret);
            sum += ret;
        }
    printf("%d\n",sum);
    return 0;
}
