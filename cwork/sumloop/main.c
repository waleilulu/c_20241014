#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int total=0;
	
	/*把1~10每次累進的值全部放進去total裡面，1+2+3+4+5+6+7+8+9+10*/
	for(i=1; i<=10; i++){
		total=total+i;
	}
	printf("%d\n", total);
	return 0;
}
