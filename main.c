#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ans=59;
	int m;
	int t=0;
	
	
	
	do
	{
		printf("Guess a number : ");
		scanf("%d", &m);
		
		if (m<ans)
		{
			printf("low!\n");
		}
		else if (m>ans)
		{
			printf("high!\n");
		}
		t++;
	} while (m != ans);
	
	printf("Congraturations! You tried %d times", t);
	
	return 0;
}
