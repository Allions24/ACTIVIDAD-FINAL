#include <stdio.h>
void imprimirMatriz(int matriz[3][3]) 
{
    for (int i = 0; i < 3; ++i) 
	{
        for (int j = 0; j < 3; ++j) 
		{
            printf("%d\t", matriz[i][j]);
		}
        printf("\n");
    }
}
int esMatrizMagica(int matriz[3][3]) 
{
int sumaFila = matriz[0][0] + matriz[0][1] + matriz[0][2];
for (int i = 1; i < 3; ++i) 
	{
    	int sumaFilaActual = matriz[i][0] + matriz[i][1] + matriz[i][2];
    	if (sumaFilaActual != sumaFila) 
		{
            return 0; 
        }
    }
for (int j = 0; j < 3; ++j) 
	{
		int sumaColumna = matriz[0][j] + matriz[1][j] + matriz[2][j];
		if (sumaColumna != sumaFila) 
		{
        	return 0; 
        }
    }
int sumaDiagonalPrincipal = matriz[0][0] + matriz[1][1] + matriz[2][2];
if (sumaDiagonalPrincipal != sumaFila) 
	{
    return 0; 
    }
int sumaDiagonalSecundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];
if (sumaDiagonalSecundaria != sumaFila) 
	{
    return 0; 
    }
return 1; 
}

int main() 
{
int matriz[3][3];
matriz[0][0] = 2;
matriz[0][1] = 9;
matriz[0][2] = 4;
matriz[1][0] = 7;
matriz[1][1] = 5;
matriz[1][2] = 3;
matriz[2][0] = 6;
matriz[2][1] = 1;
matriz[2][2] = 9;
printf("Matriz ingresada:\n");
imprimirMatriz(matriz);

if (esMatrizMagica(matriz)) 
	{
		printf("La matriz es magica.\n");
    } 
else 
	{
 	 printf("La matriz no es magica.\n");
    }
    return 0;
}





 
