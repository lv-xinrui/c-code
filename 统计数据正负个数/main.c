//
//  main.c
//  统计数据正负个数
//  输入10个整数，分别统计输出正数、负数的个数。
//  Created by 我爱吃糖 on 2024/2/4.
//

#include <stdio.h>
 
int main()
{
    int arr[10] = { 0 };
    int b = 0;
    //输入值循环计数器
    int d = 0;
    int e = 0;
    //正负数数量计数器
 
    while (b < 10)
    {
        scanf("%d", &arr[b]);
        b++;
    }
    //循环10次，把输入值存到arr数组里去
 
    for (int c = 0; c < 10; c++)
    {
        if (arr[c] < 0)
        {
            d++;
        }
        else if (arr[c] > 0)
        {
            e++;
        }
        //判断正负数
    }
 
    printf("positive:%d\nnegative:%d", e,d);
    //输出结果
    return 0;
}
