#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[20];
	char s2[20];
	
	scanf("%s", &s1);
	scanf("%s", &s2);
	
	/*方法一*/	
	//strcat(s1, " "); /*先加一個空格到s1*/
	//strcat(s1, s2); 
	
	/*方法二*/
	strcat(strcat(s1, " "), s2); /*兩個直接串一串*/
	
	printf("您的全名: %s\n", s1);
	return 0;
}
