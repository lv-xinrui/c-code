//
//  main.c
//  二分法
//求中间元素的下标，使⽤ mid = (left+right)/2 ，如果left和right⽐较⼤的时候可能存在问题，可以使⽤下⾯的⽅式
//mid = left+(right-left)/2;
//  Created by 我爱吃糖 on 2024/2/14.
//

#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int left = 0;
    int right = sizeof(arr)/sizeof(arr[0])-1;
    int key = 7;//要找的数字
    int mid = 0;//记录中间元素的下标
    int find = 0;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(arr[mid]>key)
        {
            right = mid-1;
        }
        else if(arr[mid] < key)
        {
            left = mid+1;
        }
        else
        {
            find = 1;
            break;
        }
    }
    if(1 == find )
        printf("找到了,下标是%d\n", mid);
    else
        printf("找不到\n");
}
