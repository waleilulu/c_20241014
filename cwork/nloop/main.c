#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int j;
	for(i=1; i<10; i++){
		printf("\n");
		
		for(j=1;j<10; j++){
			printf("%d\t", i*j);
		}
	}
	return 0;
}
