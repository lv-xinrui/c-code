//
//  main.c
//  矩阵转置
//
//  Created by 我爱吃糖 on 2024/2/2.
//

#include <stdio.h>
 
int main()
{
    int n = 0;
    int m = 0;
    int arr[10][10] = { 0 };
    scanf("%d %d", &n, &m);
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
 
    return 0;
}
