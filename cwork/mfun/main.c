#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=-11;
	int result;
	result=fabs(a); /*fabs為絕對值，a為參數*/
	printf("%d\n", result);
	
	float b =8.8;
	result=ceil(b); /*無條件進位*/
	printf("%d\n", result);
	result=floor(b);
	printf("%d\n", result); /*無條件捨去*/
	
	int c=7;
	int d=3;
	result = pow(c,d); /*c的d次方，c是底數，d是指數*/
	printf("%d\n", result);
	
	result = pow(d,c);
	printf("%d\n", result);
	
	int e =81;
	result=sqrt(e); /*平方根*/
	printf("%d\n", result); 
	
	float f=88.2;
	result = round(f); /*四捨五入*/
	printf("%d\n", result);
	 
	return 0;
}
