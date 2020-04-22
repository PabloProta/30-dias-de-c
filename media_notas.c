#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	float media = 0;
	int i,nota[10];
	
	for( i = 1; i <= 10; i++)
	{
		printf("Digite a nota %d: ", i);
		scanf("%d",&nota[i]);
		media = media + nota[i];
	}
	
	printf("As nota digitadas foram:");
		for( i = 1; i <= 10; i++)
	{
		printf(" %d,", nota[i]);
	}
	media = media/10;
	printf("\nSua média final é: %.2f", media);
	
	return 0;	
}


