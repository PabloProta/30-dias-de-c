#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main()
{
   
   
 int i,j,count=3, n = 5;
	
	for (i = 1; i <= n; i++)
	{
		for(j = 1; j <= n - i ; j++)
		{
			printf(" ");
		}
		for(j = 1; j < n - count ; j++)
		{
			printf(" %d",i);
			
		}
		count--;
		printf("\n");
	}
    return 0;
}
