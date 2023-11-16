// 01_2_ 정수 포인터 변수에 동적메모리 할당하기

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *x; //정수 포인터 변수 x 선언
    x = (int *)malloc(sizeof(int)); /*
    malloc은 메모리를 할당(memory allocation)해주는 함수로 괄호 속에는 크기를 지정한다.
    여기서는 정수의 크기만큼 할당한다.
    캐스트 연산자 (int *)는 메모리를 할당해서 정수 포인터 값으로 가져오기 위함이다. */

    *x = 123; //할당된 포인터 변수가 가리키는 메모리에 값을 저장한다.
    printf("x가 가리키는 곳의 값 %d \n", *x); 
    
    free(x); /* free 함수는 malloc으로 할당된 메모리를 해체하는 함수
    
    malloc 또는 calloc을 이용해 메모리를 확보하면 반드시 free를 이용해서 해제해 주어야한다.
    malloc으로 할당하면 메모리 공간만 확보하고 초기화는 되지 않지만, calloc으로 메모리를 할당하면 모든 값이 0으로 초기화 된다. */

    /* 실행결과
    x가 가리키는 곳의 값 123 
    */
}