//
//  main.c
//  输出空心正方形
//
//  Created by 我爱吃糖 on 2024/1/31.
//

#include <stdio.h>
int main()
{
  int n = 0;
  while(scanf("%d", &n) != EOF)
  {
      for(int i=0; i<n; i++)  //外循环为行
      {
         for(int j=0; j<n; j++) //内循环为列
         {
            if(i==0||i==n-1||j==0||j==n-1)//找规律
                 printf("* ");
             else
                 printf("  ");
         }
         printf("\n");
      }
  }
}
