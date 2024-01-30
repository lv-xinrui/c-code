//
//  main.c
//  输出X
//  多组输入，一个整数（2~20），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度。
//输入：
//5
//输出：
//*   *
// * *
//  *
// * *
//*   *
//  Created by 我爱吃糖 on 2024/1/29.
//

//找到规律是关键，看作一条正斜杠和反斜杠
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
             if(i == j || i+j == n-1)
     //最关键的地方，正斜线为[i][i]处是*， 反斜杠为[i][n-1-j]处是*，一行打印1个或2个*
                 printf("*");
             else
                 printf(" ");
         }
         printf("\n"); //打印完一行，换行
      }
  }
  return 0;
}
