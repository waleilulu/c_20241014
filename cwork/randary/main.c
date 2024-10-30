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
	
	int count=0; /*璸衡Τ碭计*/
	for(i=1; i<=10; i++ ){
		if(num[i]%2==0){
			printf("%d琌案计\n", num[i]);
		} 
		else{
			printf("%d琌计\n", num[i]);
		}
		count++; /*仓璸璸衡碭计*/ 
	}
	
	printf("羆Τ%d计", count);

	return 0;
}
