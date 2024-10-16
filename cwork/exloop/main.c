#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for(i=1; i<=10; i++){
		if(i==6){
			break; /*跳出迴圈*/ 
		}
		printf("%d  ", i);
	}
	
	printf("\n");
	
	for(i=1; i<=10; i++){
		if(i==6){
			continue; /*碰到6，6跳掉了，但繼續迴圈 */ 
		}
		printf("%d  ", i);
	}
	return 0;
}
