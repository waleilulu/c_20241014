#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char acct[20];
	int pwd;
	
	printf("請輸入帳號: \n");
	scanf("%s", &acct);
	
	printf("請輸入密碼: \n");
	scanf("%d", &pwd);
	
	if (strcmp(acct, "abc") == 0 && pwd == 123) {
        printf("歡迎登入!\n");
    } 

	else {
        printf("登入失敗\n");
    }
	
	return 0;
}
