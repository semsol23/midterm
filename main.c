#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	int sum;
	
	sum = a+b;
	return sum;
}

int main(int argc, char *argv[]) {
	
	int a, b;
	int sum;
	
	sum = sumTwo(2, 5);
	printf("%d", sum);

	return 0;
}
