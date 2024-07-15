#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 5;
	int arr[5];
	for (int j = 0; j < i; j++) {
		scanf("%d", &arr[j]);
	}

	int Max = arr[0];
	for (int j = 1; j < i; j++) {
		if (Max < arr[j]) {
			Max = arr[j];

		}
	}

	int Min = arr[0];
	for (int j = 1; j < i; j++) {
		if (Min > arr[j]) {
			Min = arr[j];
		}
	}
	printf("입력된 정수 중에서 최댓값 : %d\n", Max);
	printf("입력된 정수 중에서 최솟값 : %d", Min);

}