#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char c;
	int i;
	
	printf("input a number : ");
	scanf("%c", &c);
	
	i = c - 48;
	
	printf("the input number is %d", i);
	
	return 0;
}
