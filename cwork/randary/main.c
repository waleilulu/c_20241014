#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[10];
	srand(time(NULL));
	
	int i;
	for(i=1; i<=10; i++ ){
		num[i] = rand()%100+1;
	}
	
	int count=0; /*�p�⦳�X�Ӽ�*/
	for(i=1; i<=10; i++ ){
		if(num[i]%2==0){
			printf("%d�O����\n", num[i]);
		} 
		else{
			printf("%d�O�_��\n", num[i]);
		}
		count++; /*�֭p�p��F�X�Ӽ�*/ 
	}
	
	printf("�`�@��%d�Ӽ�", count);

	return 0;
}
