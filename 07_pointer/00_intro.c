#include <stdio.h>

/* �����Ͷ�?
- data�� ����� ��ġ (�޸�)�� '�ּ�'�� �̿��Ͽ� ���� �����ϴ� ���
- ��� ���� ����
- �ּҿ����� : &
    int i;
    scanf("%d", &i); �� ��� i�� �ּҸ� ��Ÿ�� */

void main()
{
    //������ ����
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
    // a�� �ּ� ���� ����ȴ�.

    ii = a;
    printf("%d", ii); // 10
    // a�� ���� ����ȴ�. �ٵ� ��? �����ͷ�

    return 0;
}

/* �޸� �Ҵ�
- �ʿ��� ������ �ʿ��� ��ŭ ������ �Ҵ��� �� �ִ�.
- �������� �Ҵ�� �޸𸮴� ���α׷��� ������ ���� free �Լ��� �̿��Ͽ� �ݵ�� ������ �ּ��� �Ѵ�.

1) malloc()
: malloc(ũ��) -> ����Ʈ ��
: ���� void *malloc(size_t size);
- �ʱ�ȭ ���� ����

2) calloc()
: malloc(����, �� ���� ũ��) -> '����*�� ���� ũ��'��ŭ �Ҵ�
: ���� void *calloc(size_t num, size_t size);
- 0���� �ʱ�ȭ��

3) free()
: free(������ ����)
: ���� void free(void* ptr);
- �Ҵ�� ������ �޸� ���� ��ȯ

4) realloc()
: realloc(������ ����, ũ��)
: ���� void *realloc(void *memblock, size_t size)
- �� �� �Ҵ�� �޸� ���� ���Ҵ�, ũ�� �� �����͵� ����� */
