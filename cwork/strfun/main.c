#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[20];
	char str2[20];
	
	scanf("%s", &str1);
	scanf("%s", &str2);
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	
	strcat(str1, str2); /*�r��걵�A��str2�[��str1�̭�*/
	printf("str1=%s\n", str1);
	
	char str3[20];
	strcpy(str3, str1); /*�N�᭱���r��A�ƻs��e�����r�ꤤ*/
	printf("str3=%s\n", str3);
	return 0;
}
