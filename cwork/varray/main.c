#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[]={99, 88, 77, 66, 55};
	
	int i;
	for(i=0; i<5; i++){
		printf("%d\t", num[i]);
	}
	printf("\n");
	
	float funm[]={99.9, 88.8, 77.7, 66.6, 55.5};
	for(i=0; i<5; i++){
		printf("%.1f\t", funm[i]);
	}
	printf("\n");
	
	char ch[]={'a', 'b','c', 'd','e'};
	for(i=0; i<5; i++){
		printf("%c\t", ch[i]);
	}
	printf("\n");
	
	char name[]="James"; 
	printf("%s\n", name); /*James*/
	
	for(i=0; i<5; i++){
		printf("%c\t", name[i]); /*印出個別字元*/
	}
	printf("\n");
	
	double dnum[]={99.5, 88.5, 77.5, 66.5, 55.5};
	for(i=0; i<5; i++){
	 	printf("%.1f\t", dnum[i]);
	}
	printf("\n");
	
	return 0;
}
