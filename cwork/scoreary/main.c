#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score[10];
	int i;
	for(i=0;i<10; i++){
		printf("�п�J�ǥͦ��Z: ");
		scanf("%d", &score[i]);
	}
	
	int total=0;	
	for(i=0;i<10; i++){
		printf("%d\t", score[i]);
		total += score[i];
	}
	printf("�ǥ��`���Z: %d\n", total);	


	
	int size;
	size = sizeof(score)/sizeof(score[0]);


	float average;
	average = (float)total/size;
	printf("�������Z: %.1f\n", average);


	
	return 0;
}
