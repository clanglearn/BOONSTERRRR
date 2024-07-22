#include <stdio.h>

int main() {
	int home[3][3] = {
		{7,1,4},
		{3,8,5},
		{2,2,1}
	};
	int i, j; //i=세로길이,층, j= 가로길이, 호//
	scanf("%d %d", &i, &j);
	printf("%d\n", home[3 - i][j - 1]);

	for (int i = 0; i < 3; i++) {
		int sum=0;
		for (int j = 0; j < 3; j++) {
			sum += home[i][j];
		}
		printf("%d층 인원수: %d\n", 3-i, sum);
	}

}