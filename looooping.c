#include <stdlib.h>
#include <math.h>

int main(void)
{	
	int i, n = 10, resultado;
	
	for( i = 1; i <= n; i++ )
	{
		resultado = pow(i,2);
		printf("%d\n",resultado);
	}
	return 0;
}
