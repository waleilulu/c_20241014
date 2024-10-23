#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score[10];
	int i;
	for(i=0; i<5; i++){
		printf("½Ð¿é¤J: ");
		scanf("%d", &score[i]);
	}
	for(i=0; i<5; i++){
		printf("%d\n", score[i]);
	}
	return 0;
}
