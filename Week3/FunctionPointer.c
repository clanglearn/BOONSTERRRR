#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2) {
	if (num1 > num2) {
		return num1 - num2;
	}
	else return num2 - num1;
}
int mul(int num1, int num2) {
	return (num1 * num2);
}
int dvd(int num1, int num2) {
	if (num1 > num2) {
		return num1 / num2;
	}
	else return num2 / num1;
}


int main() {
	int t, a, b, c, g;
	scanf("%d", &t);
	for (int w = 0; w < t; w++) {
		scanf("%d %d %d", &a, &b, &c);
		int(*math)(int, int);

		if (a == 0) {
			math = add;
			printf("%d\n", math(b, c));
		}
		if (a == 1) {
			math = sub;
			printf("%d\n", math(b, c));
		}
		if (a == 2) {
			math = mul;
			printf("%d\n", math(b, c));
		}
		if (a == 3) {
			math = dvd;
			printf("%d\n", math(b, c));
		}

	}
	
	


}

//문제처럼 딱 2/0 1 3/3 1 2 입력하고 출력은 4/2 이게 할수는 없나//
