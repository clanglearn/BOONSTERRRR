#include <stdio.h>

void Swap(int* ptr1, int* ptr2) {
	int a = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = a;

}

int main() {
	int num1 = 10, num2 = 20;
	printf("Before Swap: %d %d\n", num1, num2);
	Swap(&num1, &num2);
	printf("After Swap: %d %d\n", num1, num2);

}