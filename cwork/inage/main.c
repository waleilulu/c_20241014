#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int birthyear;
	int thisyear=2024;
	int age;
	scanf("%d", &birthyear); 
	age=thisyear-birthyear;
	printf("�z���~%d��\n", age);
	
	return 0;
}
