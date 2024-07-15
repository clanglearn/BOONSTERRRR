#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[6] = { 1,2,3,4,5,6 };

	int j;
	for (int i = 0; i < 3; i++) {
		int j = arr[i];
		arr[i] = arr[5 - i];
		arr[5 - i] = j;
	}

    printf("%d",&arr);
}

//모르겠어 그냥 질문해//
