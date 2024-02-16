//
//  main.c
//  计算一元二次方程 计算一元二次方程
//
//  Created by 我爱吃糖 on 2024/2/16.
//
//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，当a = 0时，输出“Not quadratic equation”，当a ≠ 0时，根据△ = b2 - 4*a*c的三种情况计算并输出方程的根。
//输入描述：
//
//多组输入，一行，包含三个浮点数a, b, c，以一个空格分隔，表示一元二次方程ax2 + bx + c = 0的系数。
//输出描述：
//
//针对每组输入，输出一行，输出一元二次方程ax2 + bx +c = 0的根的情况。
//  如果a = 0，输出“Not quadratic equation”；
//  如果a ≠  0，分三种情况：
//△ = 0，则两个实根相等，输出形式为：x1=x2=...。
//△  > 0，则两个实根不等，输出形式为：x1=...;x2=...，其中x1  <=  x2。
//△  < 0，则有两个虚根，则输出：x1=实部-虚部i;x2=实部+虚部i，即x1的虚部系数小于等于x2的虚部系数，实部为0时不可省略。实部= -b / (2*a),虚部= sqrt(-△ ) / (2*a)
//所有实数部分要求精确到小数点后2位，数字、符号之间没有空格。

#include <math.h>
int main()
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    while (scanf("%f %f %f", &a, &b, &c) == 3)
    {
        if (a == 0)
        {
            printf("Not quadratic equation\n");
        }
        else
        {
            float deta = b * b - 4 * a * c;
            if (deta >= 0)
            {
                float result1 = (-b + sqrt(deta)) / (2 * a);
                float result2 = (-b - sqrt(deta)) / (2 * a);
                if (deta > 0)
                {
                    printf("x1=%.2f;x2=%.2f\n", result2, result1);
                }
                else
                {
                    if (result1 == 0)
                    {
                        printf("x1=x2=0.00\n");
                    }
                    else
                    {
                        printf("x1=x2=%.2f\n", result1);
                    }
                }
            }
            else
            {
                float shibu = (-b) / (2.0 * a);
                float xubu = (sqrt(-deta)) / (2.0 * a);
                if(xubu < 0)
                {
                    xubu = -xubu;
                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", shibu, xubu, shibu, xubu);
                }
                else
                {
                    printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", shibu, xubu, shibu, xubu);
                }
            }
        }
    }
    return 0;
}

