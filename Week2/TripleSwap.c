#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//i=10,j=20,p=30인걸로 설정하고 스왑함//

void Swap(int* ptr1, int* ptr2, int* ptr3) {
    int p = *ptr1;
    *ptr1 =*ptr2;
    *ptr2 =*ptr3;
    *ptr3 = p;
    printf("%d %d %d",*ptr1,*ptr2,*ptr3);


}

int main() {
    int i = 10, j = 20, p = 30;
    Swap(&i, &j, &p);

}