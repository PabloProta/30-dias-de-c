#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	
	printf("Digite sua idade \n");
	scanf("%d",&idade);
	if ( idade < 18)
	{
		printf("Não pode beber, vai estudar!!!");
	}
	else
	{
		printf("Pode beber!!");
	}
	
	return 0;
}
