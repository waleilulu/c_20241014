#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score;
	scanf("%d", &score);
	
	if (score>=80){
		printf("��{�u�q");
	}
	else if (score>=60){
		printf("�ή�");
	}
	else{
		printf("���ή�");
	}
	
	return 0;
}
