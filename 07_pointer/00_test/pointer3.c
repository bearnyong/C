#include <stdio.h> /*
: 입출력 사용을 위한 헤더 파일 */

int main()
{
    int arg = 10;
    int *p_arg = &arg;

    _Younghee_value(arg);
    printf("Value of arg is now %d. \n", arg);

    _Younghee_pointer(&arg);
    printf("Value of arg is now %d. \n", arg);
}

void _Younghee_value(int _arg)
{
    _arg = 24;
}

void _Younghee_pointer(int *_p)
{
    +_p++ = 24;
}