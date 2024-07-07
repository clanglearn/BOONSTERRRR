.
#include <stdio.h>


int main() {
	int num1 = 1, num2 = 1;
	while (num1< 4 && num2 <10)
	{
		printf("%d * %d =%d\n", num1, num2, num1 * num2);
		++num2;
		
		while (num2 >9)
		{
			++num1;
		}
		
	}
	
}


//1차시도실패//

#include <stdio.h>


//int main() {
//	int num1 = 1, num2 = 1;
//	while (num1< 4 && num2 <10)
//	{
//		printf("%d * %d =%d\n", num1, num2, num1 * num2);
//		++num2;
//		
//		while (num2 >9)
//		{
//			++num1;
//		}
//		
//	}
//	
//}

int main() {
	int num1 = 1;
	while (num1 < 4)
	{
		int num2 = 1;
		while (num2 < 10)
		{
			printf("%d * %d =%d\n", num1, num2, num1 * num2);
			++num2;

		}
		num1++;
		

	}

}

//어머미친이게어케성공한거야 찍었는데?!!어ㅓ머머ㅓ머머ㅓㅁ//

int main2() {
	int num3 = 4;
	do
	{
		int num4 = 1;
		do
		{
			printf("%d * %d =%d\n", num3, num4, num3 * num4);
			++num4;
		} while (num4 < 10);
		num3++;
	} while (num3 < 7);
	
}

//엥 각자 따로따로 하면 나오기는 하는데 어케 합치지//
//do-while은 그냥 while위치에 do놓고 나중에 조건 넣는건가//

int main() {
	for (int num5 = 7; num5 < 10; num5++)
		for (int num6 = 1; num6 < 10; ++num6)
			printf("%d * %d=%d\n", num5, num6, num5 * num6);

}

//흐흐하하ㅏㅏㅎㅎ또 성공했지뭐야???이제 합쳐야해//