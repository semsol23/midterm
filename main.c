#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, n;
	int sum=0;
	
	printf("input a number : ");
	scanf("%d", &n);
	
	for (i=0; i<=n; i++)
	{
		sum = sum+i;
	}
	
	printf("the result is %d", sum);
	
	return 0;
}
