#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	scanf("%d", &num);
	int* bag;
	bag = (int*)calloc(num, sizeof(int));
	for (int i = 0; i < num; i++) {
		scanf("%d", &bag[i]);
	}
	int dist;
	scanf("%d", &dist);
	bag = (int*)realloc((int*)bag, sizeof(int)*dist);
	for (int i = num; i < num + dist; i++) {
		scanf("%d", &bag[i]);
	}
	for (int i = 0; i < num + dist; i++) {
		printf("%d ", bag[i]);
	}
	
}
