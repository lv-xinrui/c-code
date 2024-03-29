//
//  main.c
//  字符转ASCII码
//  BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形式存储。BoBo出了一个问题给KiKi，输入一个字符，输出该字符相应的ASCII码。

//  Created by 我爱吃糖 on 2024/2/7.
//  在输出显示的时候，数据的长度对应上是很重要的，多了会浪费不必要的空间，少了会导致数据输出显示异常。
//就比如这题的char型变量，它是在这个编译器里面是一个字节的长度，也就是8位二进制。
//而%d是指的int类型的转换规则，也就是4个字节，想要正确的显示char类型的话需要在%后面，d的前面加上一个长度指示符。
//那有的人就要问了，这不是题目都过了，怎么还不对了呢？
//这是因为printf这个函数会将int类型等级以下的类型自动转换为int类型，如会自动把char、short转换为int类型，所以输出的依旧是正确的。
//但是写程序就是要严谨，不然程序庞大后会有很多问题出现，并且scanf函数不存在低等级的类型自动转换为int型，如果还像printf那样使用有时候就会出现问题。
//这里写出转换规则中长度指示符对应的类型等级%hhd = char、%hd = short、%d = int、%ld = long、%lld = long long。
//hh、h、l、ll这几个就是长度指示符。

#include <stdio.h>
 
int main() 
{
    char c = 0;
    scanf("%c",&c);
    printf("%hhd",c);
    return 0;
}
