#include <stdio.h> /*
: ����� ����� ���� ��� ���� */

int main() {
    printf("Hello world!\n");
    printf("Ctrl+Alt+C -> �����Ϸ� ����\n");
    printf("Ctrl+Alt+R -> ����\n");
    printf("---------------------------------\n");

    hi();

    return 0;
}

/*
- ���(constant) : �̸� �������� ������ �Һ��� ��
- ����(variable) : ���÷� ���� ���ϴ� ��
- ������Լ�(I/O function) : �������� ���Ŀ� �°� ������ϴ� �Լ� 
- ��������(data type) : ��ǻ�Ϳ��� �����͸� ǥ���ϱ� ���Ͽ� ������ ������ ���� */

int hi() {
    
    //�ڷ���
    char op;
    int x, y;

    printf("������ �Է��ϼ��� : ");
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
        printf("�������� �ʴ� ������ �Դϴ�. \n");

    return 0;
}