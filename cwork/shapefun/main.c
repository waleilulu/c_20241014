#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
calArea(int length, int width){
	int x;
	x = length * width;
	return x;
	
}
calCircum(int length, int width){
	int y;
	y = 2*length + 2*width;
	return y;
}

int main(int argc, char *argv[]) {
	int length;
	printf("�п�Jlength: ");
	scanf("%d", &length); 
	
	int width;
	printf("�п�Jwidth: ");
	scanf("%d", &width); 
	
	// �p�⭱�n�M�P��
    int area = calArea(length, width);
    int circum = calCircum(length, width);
    
    // ��X���G
    printf("���n= %d\n", area);
    printf("�P��= %d\n", circum);
	return 0;
}
