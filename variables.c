#include <stdlib.h>
#include <locale.h>


int main (void)
{
	setlocale(LC_ALL,"Portuguese");
	float num1 = 5, num2 =3, resultado;
	
	printf("Números: %.0f  %.0f\n",num1, num2);
	resultado = num1 + num2;
	printf("Soma: %.0f\n",resultado);
	resultado = num1 - num2;
	printf("Diferença: %.0f\n", resultado);
	resultado = num1 * num2;
	printf("Produto: %.0f\n", resultado);
	resultado = num1 / num2;
	printf("Quociente: %.0f\n", resultado);
	
	
	
	
	
	
	
	return 0;
}
