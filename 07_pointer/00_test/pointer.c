#include <stdio.h> /*
: 입출력 사용을 위한 헤더 파일 */

int main()
{
    char language = 'c'; // 문자
    int thisYear = 2019; // 정수
    double pi = 3.14;    // 더블
    // 이 값들은 메모리 어딘가에 저장됨

    char *p0 = &language; // 포인터의 선언
    printf("p0 Points %c. \n", *p0);
    //p0 Points c. 

    int x = 1;
    int y = 200;
    int z = 20190702;

    int *p1 = &x;
    printf("p1 Points %d now. \n", *p1);
    //p1 Points 1 now.
}
