//
//  main.c
//  数组
//
//  Created by 我爱吃糖 on 2024/1/25.
//

#include <stdio.h>
int main()
{
    int i=0,j=0;
    int arr1[10]={0};
    for (i=0; i<10; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (i=0; i<9; i++)
    {
        
        for (j=i; j<9-i; j++)
        {
            
            if (arr1[j]>arr1[j+1])
            {
                int t=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=t;
            }
        }
    }
    for (i=0; i<10; i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
    
}


