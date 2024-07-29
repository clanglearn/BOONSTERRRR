#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	scanf("%d", &i);
	int* num;
	num = (int*)malloc(i * sizeof(int));
	for (int a = 0; a < i; a++) {
		scanf("%d", &num[a]);

	}
	for (int b = 0; b < i; b++) {
		printf("%d ", num[b]);
	}
	
	free(num);
}

