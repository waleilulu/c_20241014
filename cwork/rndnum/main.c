#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	srand(time(NULL)); /*�[�W�o���N�X�A�N�ܨ��ü�*/ 
	num=rand()%100+1; /*��1~100����*/
	printf("%d\n", num);
	num=rand()%100+1;
	printf("%d\n", num);
	
	return 0;
}
