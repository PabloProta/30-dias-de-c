#include <stdlib.h>
#include <locale.h>

void Somar(int num1, int num2);
void Subtrair(int num1, int num2);
void Mutiplicar(int num1, int num2);
void Dividir(int num1, int num2);
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, opcao;
	
	do
	{
		printf("somar = 1,   subtrair = 2,  mutiplicar = 3, dividir = 4\n");	
		scanf("%d", &opcao);
		switch (opcao)
		{
			
				case 1 :
					printf("Digite o 1º número:\n ");
					scanf("%d",&num1);
					printf("Digite o 2º número: \n");
					scanf("%d",&num2);
					Somar(num1,num2);
					opcao = 0;
				   
				break;
				case 2:
					printf("Digite o 1º número:\n ");
					scanf("%d",&num1);
					printf("Digite o 2º número: \n");
					scanf("%d",&num2);
					Subtrair(num1,num2);
					opcao = 0;
			
				break;
				case 3:
					printf("Digite o 1º número:\n ");
					scanf("%d",&num1);
					printf("Digite o 2º número: \n");
					scanf("%d",&num2);
					Mutiplicar(num1,num2);
					opcao = 0;
				   
				break;
				case 4:
					printf("Digite o 1º número:\n ");
					scanf("%d",&num1);
					printf("Digite o 2º número: \n");
					scanf("%d",&num2);
					Dividir(num1,num2);
					opcao = 0;
				    
				break;
				default:
					printf("Operação inválida!!\n");
					
				break;
		}
	}while( opcao != 0 );
	return 0;	
}
void Somar(int num1, int num2)
{
	float resultado;
	
	resultado = num1 + num2;
	printf("%.2f",resultado);
}
void Subtrair(int num1, int num2)
{
		float resultado;
	
	resultado = num1 - num2;
	printf("%.2f",resultado);
}
void Mutiplicar(int num1, int num2)
{
		float resultado;
	
	resultado = num1 * num2;
	printf("%.2f",resultado);
}
void Dividir(int num1, int num2)
{
		float resultado;
	
	resultado = num1 / num2;
	printf("%.2f",resultado);
}
