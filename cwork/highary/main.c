#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int height[10];
	int i;
	for(i = 0; i < 10; i++) {
        printf("請輸入第 %d 個身高: ", i + 1);
        scanf("%d", &height[i]);
    }
      
    int count=0;
	printf("身高在175到180之間的有:\n");
    for(i = 0; i < 10; i++) {
        if(height[i] >= 175 && height[i] <= 180) {
			printf("%d\n", height[i]);
			count ++;
        }
    }
	printf("共有 %d 個符合標準\n", count);

	return 0;
}
