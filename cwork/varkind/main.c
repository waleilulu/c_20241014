#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 5;
	printf("a=%d\n", a);
	float b =8.8; /*�B�I�p��*/
	printf("b=%f\n", b);
	printf("b=%.1f\n", b); /*�p�Ưd�@��*/ 
	printf("b=%.2f\n", b); /*�p�Ưd���*/ 
	
	char c ='W'; /*�r��*/ 
	printf("c=%c\n", c);
	
	char d[]="James";
	printf("d=%s\n", d);
	
	
	double e=8.8; /*����Ǽ�*/
	printf("e=%.1f\n", e);
	
	return 0;
}
