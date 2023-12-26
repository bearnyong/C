#include <stdio.h>

/* 포인터란?
- data가 저장된 위치 (메모리)를 '주소'를 이용하여 간접 접근하는 방법
- 사용 전에 선언
- 주소연산자 : &
    int i;
    scanf("%d", &i); 의 경우 i의 주소를 나타냄 */

void main()
{
    //포인터 기초
    introPointer();

    return 0;
}

void introPointer()
{
    int *i, *ii, a = 10;
    float *j;
    char *s;

    i = &a;
    printf("%d\n", i); // 6422292
    // a의 주소 값이 저장된다.

    ii = a;
    printf("%d", ii); // 10
    // a의 값이 저장된다. 근데 왜? 포인터로

    return 0;
}

/* 메모리 할당
- 필요한 시점에 필요한 만큼 공간을 할당할 수 있다.
- 동적으로 할당된 메모리는 프로그램이 끝나기 전에 free 함수를 이용하여 반드시 해제해 주서야 한다.

1) malloc()
: malloc(크기) -> 바이트 수
: 원형 void *malloc(size_t size);
- 초기화 되지 않음

2) calloc()
: malloc(개수, 한 개의 크기) -> '개수*한 개의 크기'만큼 할당
: 원형 void *calloc(size_t num, size_t size);
- 0으로 초기화됨

3) free()
: free(포인터 변수)
: 원형 void free(void* ptr);
- 할당된 변수의 메모리 공간 반환

4) realloc()
: realloc(포인터 변수, 크기)
: 원형 void *realloc(void *memblock, size_t size)
- 한 번 할당된 메모리 공간 재할당, 크기 및 포인터도 변경됨 */
