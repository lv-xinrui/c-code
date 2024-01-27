//
//  main.c
//  闰年
//  打印1000年到2000年之间的闰年
//  Created by 我爱吃糖 on 2024/1/27.
//

#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 1000; i <= 2000; i++)
    {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            printf("%d  ",i);
        }
        
    }
    return 0;
}
