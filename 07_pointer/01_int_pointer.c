#include <stdio.h>
#include <stdlib.h>

void main()
{

    // 01_포인터의 개념
    concept();

    // 02_정수 포인터 변수에 동적 메모리 할당하기
    dynamicMemory();

    // 03_정수 배열을 포인터를 이용하여 덧셈하기
    intAddPointer();

    return 0;
}

void concept()
{ /*
01_포인터의 개념*/

    int i = 10, j = 20, *a;

    a = &i;                                       // 정수 포인터 변수 a에 i의 주소 저장
    printf("i의 주소: %p, a의 값: %p \n", &i, a); //%p : 주소 출력
    printf("*a가 가리키는 곳의 값: %d \n", *a);   //*a는 a가 가리키는 곳의 데이터

    a = &j;                                       // 정수 포인터 변수 a에 i의 주소 저장
    printf("j의 주소: %p, a의 값: %p \n", &j, a); //%p : 주소 출력
    printf("*a가 가리키는 곳의 값: %d \n", *a);   //*a는 a가 가리키는 곳의 데이터

    /*
    a = 주소
    *a= 주소가 가지고 있는 값*/

    return 0;
}

void dynamicMemory()
{ /*
02_정수 포인터 변수에 동적 메모리 할당하기*/

    int *x;                         // 정수 포인터 변수 x 선언
    x = (int *)malloc(sizeof(int)); /*
    malloc은 메모리를 할당(memory allocation)해주는 함수로 괄호 속에는 크기를 지정한다.
    여기서는 정수의 크기만큼 할당한다.
    캐스트 연산자 (int *)는 메모리를 할당해서 정수 포인터 값으로 가져오기 위함이다. */

    *x = 123; // 할당된 포인터 변수가 가리키는 메모리에 값을 저장한다.
    printf("x가 가리키는 곳의 값 %d \n", *x);

    free(x); /* free 함수는 malloc으로 할당된 메모리를 해체하는 함수

    malloc 또는 calloc을 이용해 메모리를 확보하면 반드시 free를 이용해서 해제해 주어야한다.
    malloc으로 할당하면 메모리 공간만 확보하고 초기화는 되지 않지만, calloc으로 메모리를 할당하면 모든 값이 0으로 초기화 된다. */

    /* 실행결과
    x가 가리키는 곳의 값 123
    */
}


void intAddPointer()
{ /*
03_정수 배열을 포인터를 이용하여 덧셈하기*/

    int x[10] = {45, 77, 89, 38, 29, 58, 93, 84, 73, 66};
    int sum = 0, i, *x1;

    x1 = &x[0];
    for (i = 0; i < 10; i++, x1++)
    {
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