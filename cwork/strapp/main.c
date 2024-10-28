#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*char str[]="James";*/
	
	char str[20]; /*先自己開一個空間*/
	printf("請輸入: ");
	scanf("%s", &str);
	
/*int len = strlen(str);*/
/*	printf("%d\n", len);*/
	printf("%s\n", str);
	
	int i;
	for(i=0; i<strlen(str); i++){
		printf("%c\n", str[i]);
	}
	return 0;
}
