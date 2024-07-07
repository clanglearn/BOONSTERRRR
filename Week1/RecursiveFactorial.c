#include <stdio.h>

int Fac(int n);

int main() {
	int n;
	scanf_s("%d", &n);
	printf("%d", Fac(n)); //여기까지는 혼자서해냄//

}

int Fac(int n) {
	if (n == 0)
		return 1;
	else if (n == 1)
		return 1; //0이랑 1은 예외느낌인 애들//
	else return Fac(n - 1) * n; //여기가 생각해내기 어렵다, 재귀함수//

}

//아니 잠만 미치겠어 왜 중간에 삽입하려면 기존에 있던문자가 사라지고 교체되는 느낌으로 바뀜;;개빡치네 왜이래 갑자기//
