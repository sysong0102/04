#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	
	printf("input a year : ");
	scanf("%i", &a);
	
	if ( (a%4==0 && a%100!=0) || (a%400==0) )
	{
		printf("%i is leap year.\n", a);
	}
	else
	{
		printf("%i is not leap year.\n", a);
	}
	
	system("PAUSE");
	return 0;
}
