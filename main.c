#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int getInt()
{	
	int a;
	
	printf("input an integer : ");
	scanf("%d", &a);
	
	return a;
}

int factorial(int a)
{
	int i;
	int fac=1;
	
	for (i=1; i<=a; i++)
	{
		fac = fac*i;
	}
	
	return fac;
}

int combination(int n, int r)
{
	int a, b, c;
	int com;
	
	a = factorial(n);
	b = factorial(n-r);
	c = factorial(r);
	
	com = a/b/c;
	
	return com;
}

int main(int argc, char *argv[]) {
	
	int n, r;
	int result;
	
	n = getInt();
	r = getInt();
	
	result = combination(n, r);

	printf("combination is %d\n", result);
	
	return 0;
}
