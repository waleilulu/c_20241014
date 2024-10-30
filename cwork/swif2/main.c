#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	scanf("%d", &num);
	switch(num){
		case 1: 
				printf("One\n");
				break;
		
		case 2:
				printf("Two\n");
				break;
		
		case 3: 
				printf("Three\n");
				break;
		
		case 4:
				printf("Four\n");
				break;
		
		case 5:
				printf("Five\n");
				break;
		
		default:
				printf("輸入錯誤\n");
				break; /*default的break可加可不加*/
	}
	return 0;
}
