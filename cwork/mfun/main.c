#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=-11;
	int result;
	result=fabs(a); /*fabs������ȡAa���Ѽ�*/
	printf("%d\n", result);
	
	float b =8.8;
	result=ceil(b); /*�L����i��*/
	printf("%d\n", result);
	result=floor(b);
	printf("%d\n", result); /*�L����˥h*/
	
	int c=7;
	int d=3;
	result = pow(c,d); /*c��d����Ac�O���ơAd�O����*/
	printf("%d\n", result);
	
	result = pow(d,c);
	printf("%d\n", result);
	
	int e =81;
	result=sqrt(e); /*�����*/
	printf("%d\n", result); 
	
	float f=88.2;
	result = round(f); /*�|�ˤ��J*/
	printf("%d\n", result);
	 
	return 0;
}
