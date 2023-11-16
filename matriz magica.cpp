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
int sumaFila(int matriz[3][3], int fila) 
{
    int suma = 0;
    for (int j = 0; j < 3; ++j) 
    {
        suma += matriz[fila][j];
    }
    return suma;
}
int sumaColumna(int matriz[3][3], int columna) 
{
    int suma = 0;
    for (int i = 0; i < 3; ++i) 
    {
        suma += matriz[i][columna];
    }
    return suma;
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
    matriz[2][2] = 8;
    printf("Matriz ingresada:\n");
    imprimirMatriz(matriz);
    
    for (int i = 0; i < 3; ++i) 
    {
        printf("Suma de la fila %d: %d\n", i + 1, sumaFila(matriz, i));
    }
    for (int j = 0; j < 3; ++j) 
    {
        printf("Suma de la columna %d: %d\n", j + 1, sumaColumna(matriz, j));
    }
    int sumaDiagonalPrincipal = matriz[0][0] + matriz[1][1] + matriz[2][2];
    printf("Suma de la diagonal principal: %d\n", sumaDiagonalPrincipal);
    int sumaDiagonalSecundaria = matriz[0][2] + matriz[1][1] + matriz[2][0];
    printf("Suma de la diagonal secundaria: %d\n", sumaDiagonalSecundaria);
	
return 0;
}
 
