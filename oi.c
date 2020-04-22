#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char *nome;
	nome = calloc(1,sizeof(char));
	
	printf("Digite seu nome: \n");
	scanf("%[^\n]",nome);
	while (!nome)
	{
		nome = realloc(nome,sizeof(char)*2);
	}
	printf("oi, %s ",nome);
	return 0;
}
