#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*while迴圈方式*/
	int counter=1;
	while(counter<=10){
		printf("happy\n");
		/*counter=counter+1;*/
		counter++;
	}
	
	/*for迴圈方式*/ 
	int j;
	for(j=1; j<=10; j++){
		printf("lucky\n");
	}
	
	return 0;
	
}
