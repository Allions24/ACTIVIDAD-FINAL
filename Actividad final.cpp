#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int matriz[5][7];
int sumaDiagonalPrincipal = 0;
int sumaPrimeraFila = 0;
int sumaUltimaColumna = 0;
int sumaFila2 = 0;
int sumaFilasPares = 0;
int sumaColumnasImpares = 0;
int sumaTriangularSuperior = 0;
int sumaTriangularInferior = 0;
int sumaDiagonalSuperior = 0;
int sumaDiagonalInferior = 0;

srand(time(NULL));
for (int i = 0; i < 5; ++i) 
	{
		for (int j = 0; j < 7; ++j) 
		{
            matriz[i][j] = rand() % 10; 
        }
    }
printf("Matriz generada:\n");

for (int i = 0; i < 5; ++i) 
	{
        for (int j = 0; j < 7; ++j) 
		{
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
//Diagonal principal
for (int i = 0; i < 5; ++i) 
	{
        sumaDiagonalPrincipal += matriz[i][i];
    }
printf("\nSuma de la diagonal principal: %d\n", sumaDiagonalPrincipal);

//Primera fila
    for (int j = 0; j < 7; ++j) 
	{
        sumaPrimeraFila += matriz[0][j];
    }
printf("Suma de la fila 1: %d\n", sumaPrimeraFila);

//Ultima columna
    for (int i = 0; i < 5; ++i) 
	{
        sumaUltimaColumna += matriz[i][7 - 1];
    }
printf("Suma de la columna 7: %d\n", sumaUltimaColumna);

//Filas pares
for (int i = 0; i < 5; i += 2) 
	{
        for (int j = 0; j < 7; ++j) 
		{
            sumaFilasPares += matriz[i][j];
        }
    }
printf("Suma de las filas pares: %d\n", sumaFilasPares);

//Columnas impares
for (int j = 0; j < 7; j += 2) 
	{
        for (int i = 0; i < 5; ++i) 
		{
            sumaColumnasImpares += matriz[i][j];
        }
    }
printf("Suma de las columnas impares: %d\n", sumaColumnasImpares);

//Triangular superior
for (int i = 0; i < 5; ++i) 
	{
        for (int j = i; j <7; ++j) 
		{
            sumaTriangularSuperior += matriz[i][j];
        }
    }
printf("Suma del triangular superior: %d\n", sumaTriangularSuperior);

//Triangular inferior 
for (int i = 0; i < 5; ++i) 
	{

    	for (int j = 0; j <= i; ++j) 
		{
            sumaTriangularInferior += matriz[i][j];
        }
    }
printf("Suma del triangular inferior: %d\n", sumaTriangularInferior);

//Diagonal principal superior
    for (int i = 0; i < 5 - 1; ++i) 
	{
        sumaDiagonalSuperior += matriz[i][i + 1];
    }
printf("Suma de la diagonal principal del triangular superior: %d\n", sumaDiagonalSuperior);

//Diagonal principal inferior
for (int i = 1; i < 5; ++i) 
	{
        sumaDiagonalInferior += matriz[i][i - 1];
    }
printf("Suma de la diagonal principal del triangular inferior: %d\n", sumaDiagonalInferior);

    return 0;

}


