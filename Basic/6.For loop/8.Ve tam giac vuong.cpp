#include<stdio.h>

int main(){
	int a, b, c;
	printf("input numbers of rows:");
	scanf("%d", &c);
	for(a=1; a<=c; a++)
	{
		for(b=1; b<=a; b++)
		{
			printf("*");
			
		}
		printf("\n");
	}
}
