#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score;
	scanf("%d", &score);
	if(score>100 || score<0){
		printf("��J�����T�A�Э��s��J\n");
	}
	
	else if(score>=80){
		if(score>=90){
			printf("�ǥX\n");
		}
		else{
			printf("�u�q\n");
		}
	}
	else if(score>=60){
		if(score>=70){
			printf("���q\n");
		}
		else{
			printf("�C�ű��L\n");
		}
	}
	else{
		if(score>=50){
			printf("�ɦ�\n");
		}
		else{
			printf("���~�A��\n");
		} 
	}
	return 0;
}
