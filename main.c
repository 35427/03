#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char c;
	int i;
	
	printf("input a number : ");
	scanf("%c", &c);
	
	i = c - '0'; //아스키코드를 숫자로 변환하기 위해 -'0' 
	printf("The input number ASCII is %i\n", c);  
	printf("The input number is %i\n", i);
	
	return 0;
}
