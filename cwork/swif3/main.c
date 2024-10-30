#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int month;
	scanf("%d", &month);
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 days\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("30 days\n");
			break;
		case 2:
			printf("29 days\n");
			break;
		default:
            printf("請輸入有效的月份\n");
            break;
			
	}
	return 0;
}
