/*
[ Pointer(포인터) ]
- C언어 포인터(pointer)라는 특별한 방법을 통하여 "메모리의 위치(주소)"를 가리킬 수 있도록 함

- 주소란?
데이터가 저장되는 메모리의 위치
즉, 메모리 내의 주소를 나타내며 어떤 변수의 주소를 알고자 할 때는 주소연산자 '&'를 변수 앞에 붙여서 사용한다.

- 주소연산자 : &
ex) {
        int i
        scanf("%d", &i);
    }

- 포인터(pointer?)
데이터가 저장되어 있는 "위치의 주소"를 이용하여 간접적으로 데이터에 접근한다.
포인터는 "주소를 데이터로 갖는 변수"!!! 이므로 데이터가 저장된 위치를 알고 있어야 한다.

포인터를 선언할 때는 변수 앞에 '*'를 붙여서 선언한다.
ex) {
    int *i, a=10;
    float *j;
    char *s;
    i = &a; -> i는 주소이므로 a 주소 넣기(?)
}

- 포인터를 사용할 때의 두 가지 경우
1. '*'를 붙이지 않고 사용 : 포인터 값(주소)를 의미
2. '*'를 붙여서 사용 : 포인터가 가리키고 잇는 곳의 실제 데이터를 의미
*/