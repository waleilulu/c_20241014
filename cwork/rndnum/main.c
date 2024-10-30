#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	srand(time(NULL)); /*加上這條代碼，就變取亂數*/ 
	num=rand()%100+1; /*取1~100的數*/
	printf("%d\n", num);
	num=rand()%100+1;
	printf("%d\n", num);
	
	return 0;
}
