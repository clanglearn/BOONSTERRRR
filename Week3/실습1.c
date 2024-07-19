#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int home[3][3] = { 
		{7,1,4},
		{3,8,5},
		{2,2,1}
	};
	
	int i, j;
	scanf("%d %d", &i, &j);
	printf("%d\n", home[i][j]);

	for (int j=0; j < 3; j++) {
		int sum=0;

		for (int i = 0; i < 3; i++) {
			sum += home[j][i];

			
		}
		printf("%d층 인원수=%d\n", j, sum);
	}
	
}
