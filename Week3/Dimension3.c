#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int apt[3][3][3] = { //동,층,호//
		{{3,1,5},{4,1,8},{1,5,3}},//i, 0동 000,001,002 010 011 012 020 021 022
		{{9,0,3},{8,1,1},{4,3,4}},//1동
		{{7,3,4},{6,3,9},{2,2,2}},//2동
		//0층     1층       2층  //
	};
	int i, j, p;
	scanf("%d %d %d", &i, &j, &p);
	printf("%d\n", apt[i][j][p]);

	printf("\n");
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			for (int p = 0; p < 3; p++) {
				sum += apt[i][j][p];
				
				}
			}
		printf("%d동: %d\n", i+1, sum);
		}
	printf("\n");
	for (int j = 0; j < 3; j++) {
		int sum = 0;
		for (int i = 0; i < 3; i++) {
			for (int p = 0; p < 3; p++) {
				sum += apt[i][j][p];
			}
		}
		printf("%d층: %d\n", j+1, sum);
	}

}

