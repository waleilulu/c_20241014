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
	
	//if(str1 == str2){ /*在比較記憶體位置，所以一定是不同*/
	if(strcmp(str1, str2)==0){ /*比較裡面的字，return 0就代表相同*/ 
		printf("str1, str2 相同\n");
	}
	else{
		printf("str1, str2 不同\n");
	}
	const int month = 12; /*常數*/
	printf("%d\n" , month);
	month = 15; /*設了常數後就不給修改*/
	return 0;
}
