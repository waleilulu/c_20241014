#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[20];
	printf("�п�J: ");
	scanf("%s", str);
	/*int len = strlen(str);*/
	/*printf("���׬�: %d\n", len);*/
	
	int i;
    int count = 0; 
    for (i = 0; i < strlen(str); i++) { 
        /*printf("%c\n", str[i]);*/
        
        // �ˬd����
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
			{
            count++;
        }
    }
	printf("������%d��", count);

	return 0;
}
