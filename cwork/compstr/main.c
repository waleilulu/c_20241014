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
	
	//if(str1 == str2){ /*�b����O�����m�A�ҥH�@�w�O���P*/
	if(strcmp(str1, str2)==0){ /*����̭����r�Areturn 0�N�N��ۦP*/ 
		printf("str1, str2 �ۦP\n");
	}
	else{
		printf("str1, str2 ���P\n");
	}
	const int month = 12; /*�`��*/
	printf("%d\n" , month);
	month = 15; /*�]�F�`�ƫ�N�����ק�*/
	return 0;
}
