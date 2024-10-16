#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int total=0;
	
	/*计㎝*/
	int odd;
	for(odd=1; odd<=100; odd+=2){
		total = total + odd ;
	}
	printf("计㎝=%d\n", total);
	
	total=0;
	
	/*案计㎝*/
	int even;
	for(even=2; even<=100; even+=2){
		total = total + even;
	}
	printf("案计㎝=%d\n", total);
	
	return 0;
}
