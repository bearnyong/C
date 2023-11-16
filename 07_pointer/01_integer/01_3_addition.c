// 01_3_ 정수 배열을 포인터를 이용하여 덧셈하기

#include <stdio.h>
int main()
{
    int x[10] = {45, 77, 89, 38, 29, 58, 93, 84, 73, 66};
    int sum = 0, i, *x1;

    x1 = &x[0];
    for(i=0; i<10; i++, x1++) {
        sum += *x1;

        printf("sum = %d \n", sum);
    }

    /* 실행 결과
    sum = 45 
    sum = 122
    sum = 211
    sum = 249
    sum = 278
    sum = 336
    sum = 429
    sum = 513
    sum = 586
    sum = 652 */
}