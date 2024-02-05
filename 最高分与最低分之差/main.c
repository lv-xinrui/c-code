//
//  main.c
//  最高分与最低分之差
//
//  Created by 我爱吃糖 on 2024/2/5.
//

#include <stdio.h>

int main()
{
    int n = 0;
    int m = 0;
    int max = 0;
    int min = 100;
    scanf("%d",&n);
 
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &m);
        if(m>max)
        {
            max = m;
        }
        if(m<min)
        {
            min = m;
        }
 
    }
 
    printf("%d",max-min);
    return 0;
}
