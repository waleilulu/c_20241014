#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for(i=1; i<=10; i++){
		if(i==6){
			break; /*���X�j��*/ 
		}
		printf("%d  ", i);
	}
	
	printf("\n");
	
	for(i=1; i<=10; i++){
		if(i==6){
			continue; /*�I��6�A6�����F�A���~��j�� */ 
		}
		printf("%d  ", i);
	}
	return 0;
}
