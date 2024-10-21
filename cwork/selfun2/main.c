#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int add(int a, int b){
	return a+b;
}
int subs(int a, int b){
	return a-b;
}
int mul(int a, int b){
	return a*b;
}
int divd(int a, int b){
	return a/b;
}
int remd(int a, int b){
	return a%b;
}


int main(int argc, char *argv[]) {
	int a=5;
	int b=3;
	int result; /*°Ï°ìÅÜ¼Æ*/
	
	result=add(a,b);
	printf("%d\n", result);
	
	result=subs(a,b);
	printf("%d\n", result);

	result=mul(a,b);
	printf("%d\n", result);	
	
	result=divd(a,b);
	printf("%d\n", result);	
	
	result=remd(a,b);
	printf("%d\n", result);	
	
	return 0;
	
}
