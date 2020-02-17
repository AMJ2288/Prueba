#include <stdio.h>
#include <limits.h>

int main()
{
	printf("Limites de tipos enteros\n");
	printf("*\n");
	printf("CHAR BIT\n");
	printf("Numero de bits en un byte : %d\n",CHAR_BIT);
	printf("Numero maximo de bytes en un car�cter multibyte : %d\n",MB_LEN_MAX);
	printf("*\n");
	printf("Caracter con signo\n");
	printf("M�nimo: %d\n",CHAR_MIN);
	printf("M�ximo: %d\n",CHAR_MAX);
	
	printf("*\n");
	printf("Caracter sin signo\n");
	printf("M�nimo: 0\n");
	printf("M�ximo: %u\n",UCHAR_MAX);

	printf("*\n");
	printf("Short int con signo\n");
	printf("M�nimo: %hi\n",SHRT_MIN);
	printf("M�ximo: %hi\n",SHRT_MAX);

	printf("*\n");
	printf("Short int sin signo\n");
	printf("M�nimo: 0\n");
	printf("M�ximo: %hu\n",USHRT_MAX);
	
	printf("*\n");
	printf("Long int con signo\n");
	printf("M�nimo: %li\n",LONG_MIN);
	printf("M�ximo: %li\n",LONG_MAX);
	
	printf("*\n");
	printf("Long int sin signo\n");
	printf("M�nimo: 0\n");
	printf("M�ximo: %lu\n",ULONG_MAX);
return 0;
}
