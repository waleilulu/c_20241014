#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[20];
	char s2[20];
	
	scanf("%s", &s1);
	scanf("%s", &s2);
	
	/*��k�@*/	
	//strcat(s1, " "); /*���[�@�ӪŮ��s1*/
	//strcat(s1, s2); 
	
	/*��k�G*/
	strcat(strcat(s1, " "), s2); /*��Ӫ�����@��*/
	
	printf("�z�����W: %s\n", s1);
	return 0;
}
