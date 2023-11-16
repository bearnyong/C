#include <stdio.h> /*
: 입출력 사용을 위한 헤더 파일 */

int main() {
    int numbers[] = {1,5,4,3,9,7,8,2};
    int* p2 = &numbers[0];

    printf("p2 Points %d now. \n", *p2);
    //p2 Points 1 now.

    p2++;
    printf("p2 Points %d now. \n", *p2);
    //p2 Points 5 now.

    p2++;
    printf("p2 Points %d now. \n", *p2);
    //p2 Points 4 now.

    p2+=5;
    printf("p2 Points %d now. \n", *p2);
    //p2 Points 2 now.
}