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
	printf("請輸入length: ");
	scanf("%d", &length); 
	
	int width;
	printf("請輸入width: ");
	scanf("%d", &width); 
	
	// 計算面積和周長
    int area = calArea(length, width);
    int circum = calCircum(length, width);
    
    // 輸出結果
    printf("面積= %d\n", area);
    printf("周長= %d\n", circum);
	return 0;
}
