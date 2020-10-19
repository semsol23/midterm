#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a, b;
	float c;
	
	printf("enter son : ");
	scanf("%f", &a);
	
	printf("enter mom : ");
	scanf("%f", &b);
	
	c = a/b;
	
	printf("a/b is %f", c);
	
	return 0;
}
