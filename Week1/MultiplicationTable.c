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