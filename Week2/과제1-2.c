#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[6] = { 1,2,3,4,5,6 };

	void Arr(int arr[])
	{
		int p;
		for (p = 0; p < 6; p++)
			printf("%d ", arr[p]);

	}

	int j;
	for (int i = 0; i < 3; i++) {
		int j = arr[i];
		arr[i] = arr[5 - i];
		arr[5 - i] = j;
	}

	Arr(arr);
}

//모르겠어 그냥 질문해//
//8번째 줄에 ';'가 필요합니다, 구문오류:';'이(가) '{'앞에 없습니다. 이문장뜨는거 ㅆ어쩌라는거야 없어서 채우면 함수가 안맞다하고 빼면 저조랄 시ㅣ//