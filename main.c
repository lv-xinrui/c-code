//
//  main.c
//  百钱买百鸡
//鸡翁一值钱五，鸡母一值钱三，鸡雏三值钱一。百钱买百鸡，问鸡翁、母、雏各几何?(我国古代算术一-张丘建《算经》)含义:
//1只公鸡5元钱，1只母鸡3元钱，3只小鸡1元钱，现100元钱买100只鸡，则公鸡、母鸡、小鸡应各买多少只?
//公鸡5元/只    母鸡3元/只  小鸡 1/3 元/只
//  Created by 我爱吃糖 on 2024/1/21.
//

#include<stdio.h>

int main()
{
    int cock = 0, hen = 0, chick = 0;
    for (cock = 0; cock <= 100; cock++)
    {
        for (hen = 0; hen <= 100; hen++)
        {
            for (chick = 0; chick <= 100; chick++)
            {
                if ((cock + hen + chick == 100) && (5 * cock + 3 * hen + chick / 3 == 100)&&(chick%3==0))
                {
                    printf("cock:%d hen:%d chick:%d\n",cock,hen,chick);
                }
            }
        }
    }


}
