// 006:浮点型数据类型存储空间大小

#include <stdio.h>
int main()
{
    float a;
    double b;
    printf("%x %x\n", sizeof(a), sizeof(b));
}