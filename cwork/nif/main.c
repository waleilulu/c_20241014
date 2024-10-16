#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score;
	scanf("%d", &score);
	if(score>100 || score<0){
		printf("輸入不正確，請重新輸入\n");
	}
	
	else if(score>=80){
		if(score>=90){
			printf("傑出\n");
		}
		else{
			printf("優秀\n");
		}
	}
	else if(score>=60){
		if(score>=70){
			printf("普通\n");
		}
		else{
			printf("低空掠過\n");
		}
	}
	else{
		if(score>=50){
			printf("補考\n");
		}
		else{
			printf("明年再來\n");
		} 
	}
	return 0;
}
