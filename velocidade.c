#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	float velocidade;
	
	printf("Digite a velocidade em m/s: ");
	scanf("%f",&velocidade);
	velocidade = velocidade * 3.6;
	printf("%.2f K/h", velocidade);
	
	return 0;
}
