#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

add(int a, int b){ /*�[*/
	int result;
	result = a + b;
	printf("%d\n", result);
}
subs(int a, int b){ /*��*/ 
	int result;
	result = a - b;
	printf("%d\n", result);
}
mul(int a, int b){ /*��*/ 
	int result;
	result = a * b;
	printf("%d\n", result);
}
divd(int a, int b){ /*��*/ 
	int result;
	result = a / b;
	printf("%d\n", result);
}
remd(int a, int b){ /*�l��*/ 
	int result;
	result = a % b;
	printf("%d\n", result);
}

int main(int argc, char *argv[]) {
	int a = 5; 
	int b = 3;
	add(a, b); /*�I�s�禡(call function)*/
	subs(a, b);
	mul(a, b);
	divd(a, b);
	remd(a, b);
	
	return 0;
}
