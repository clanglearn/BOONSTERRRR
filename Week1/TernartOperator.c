#include <stdio.h>

//int main() {
//	int n;
//	scanf_s("%d", &n);
//
//	int message;
//
//	if (n > 90)
//		printf("A");
//
//	else if (n > 80)
//		printf("B");
//
//	else printf("F");
//}

int main() {
	int n;
	scanf_s("%d", &n);

	int message;

	message = (n > 90) ? 'A' : (n>80) ? 'B' : 'F';

	printf("%c", message);
}


//삼항연산자외워야하는데...//