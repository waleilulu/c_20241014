#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score [5];
	
	score[0]=99; 
	score[1]=88;
	score[2]=77;
	score[3]=66;
	score[4]=55;

	/* 
	printf("%d\n", score[0]);
	printf("%d\n", score[1]);
	printf("%d\n", score[2]);
	printf("%d\n", score[3]);
	printf("%d\n", score[4]);
	*/
	
	/*用迴圈方式列印出來*/
	int i;
	for(i=0; i<5; i++){
		printf("%d\n", score[i]);
	}
	 
	return 0;
}
