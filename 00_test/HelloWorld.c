#include <stdio.h> /*
: 입출력 사용을 위한 헤더 파일 */

int main() {
    printf("Hello world!\n");
    printf("Ctrl+Alt+C -> 컴파일러 선택\n");
    printf("Ctrl+Alt+R -> 실행\n");
    printf("---------------------------------\n");

    hi();

    return 0;
}

/*
- 상수(constant) : 미리 정해져서 고정된 불변의 수
- 변수(variable) : 수시로 값이 변하는 수
- 입출력함수(I/O function) : 데이터의 형식에 맞게 입출력하는 함수 
- 데이터형(data type) : 컴퓨터에서 데이터를 표시하기 위하여 정해진 일정한 형태 */

int hi() {
    
    //자료형
    char op;
    int x, y;

    printf("수식을 입력하세요 : ");
    scanf("%d %c %d", &x, &op, &y);

    if(op == '+')
        printf("%d %c %d = %d \n", x, op, y, x+y);
    else if (op == '-')
    {
        printf("%d %c %d = %d \n", x, op, y, x-y);
    }
    else if (op == '*')
    {
        printf("%d %c %d = %d \n", x, op, y, x*y);
    }
    else if (op == '/')
    {
        printf("%d %c %d = %d \n", x, op, y, x/y);
    }
    else if (op == '%')
    {
        printf("%d %c %d = %d \n", x, op, y, x%y);
    }
    else
        printf("지원되지 않는 연산자 입니다. \n");

    return 0;
}