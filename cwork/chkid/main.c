#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char acct[20];
	int pwd;
	
	printf("�п�J�b��: \n");
	scanf("%s", &acct);
	
	printf("�п�J�K�X: \n");
	scanf("%d", &pwd);
	
	if (strcmp(acct, "abc") == 0 && pwd == 123) {
        printf("�w��n�J!\n");
    } 

	else {
        printf("�n�J����\n");
    }
	
	return 0;
}
