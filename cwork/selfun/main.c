#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

add(int a, int b){ /*加*/
	int result;
	result = a + b;
	printf("%d\n", result);
}
subs(int a, int b){ /*減*/ 
	int result;
	result = a - b;
	printf("%d\n", result);
}
mul(int a, int b){ /*乘*/ 
	int result;
	result = a * b;
	printf("%d\n", result);
}
divd(int a, int b){ /*除*/ 
	int result;
	result = a / b;
	printf("%d\n", result);
}
remd(int a, int b){ /*餘數*/ 
	int result;
	result = a % b;
	printf("%d\n", result);
}

int main(int argc, char *argv[]) {
	int a = 5; 
	int b = 3;
	add(a, b); /*呼叫函式(call function)*/
	subs(a, b);
	mul(a, b);
	divd(a, b);
	remd(a, b);
	
	return 0;
}
