#include <stdio.h> /*
: ����� ����� ���� ��� ���� */

int main()
{
    printf("Hello world!\n");
    printf("Ctrl+Alt+C -> �����Ϸ� ����\n");
    printf("Ctrl+Alt+R -> ����\n");
    printf("---------------------------------\n");

    // hi();
    gogo();

    return 0;
}

/*
- ���(constant) : �̸� �������� ������ �Һ��� ��
- ����(variable) : ���÷� ���� ���ϴ� ��
- ������Լ�(I/O function) : �������� ���Ŀ� �°� ������ϴ� �Լ�
- ��������(data type) : ��ǻ�Ϳ��� �����͸� ǥ���ϱ� ���Ͽ� ������ ������ ���� */

int hi()
{

    // �ڷ���
    char op;
    int x, y;

    printf("������ �Է��ϼ��� : ");
    scanf("%d %c %d", &x, &op, &y);

    if (op == '+')
        printf("%d %c %d = %d \n", x, op, y, x + y);
    else if (op == '-')
    {
        printf("%d %c %d = %d \n", x, op, y, x - y);
    }
    else if (op == '*')
    {
        printf("%d %c %d = %d \n", x, op, y, x * y);
    }
    else if (op == '/')
    {
        printf("%d %c %d = %d \n", x, op, y, x / y);
    }
    else if (op == '%')
    {
        printf("%d %c %d = %d \n", x, op, y, x % y);
    }
    else
        printf("�������� �ʴ� ������ �Դϴ�. \n");

    return 0;
}

int gogo()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j%4!=0)
            {
                printf("%d x %d = %d\n", i, j, (i * j));
            }
            
            
        }
        printf("\n");
    }

    return 0;
}