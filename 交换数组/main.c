//
//  main.c
//  交换数组
//  将数组A中的内容和数组B中的内容进行交换
//  Created by 我爱吃糖 on 2024/2/17.
//

#include <stdio.h>
int main()
{
    int A[5] = {1,2,3,4,5};
    int B[5] = {10,20,30,40,50};
    for (int i = 0; i < 5; i++)
    {
        int C = A[i];
        A[i] = B[i];
        B[i] = C;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("A[%d] == %d  ",i,A[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("B[%d] == %d  ",i,B[i]);
    }
    printf("\n");
    return 0;
    
}
