/*
*
* Sistemas Operativos
*
* Programa que permite determinar el tiempo que demora calcular la suma de todas las posiciones de una matriz
* efectuando el calculo sumando todos los valores de una columna antes de pasar a la siguiente.
*
*/

#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>

#define FILAS 100000
#define COLS 10000

int matriz[FILAS][COLS];  //4Gb

int main () {

    //Llenar todas las posiciones de la matriz
    for (int i=0; i < FILAS; i++) {
        for(int j=0; j < COLS; j++) {
            matriz[i][j] = rand();
        }
    }

    int64_t suma = 0;
    for (int j=0; j < COLS; j++) {
        for(int i=0; i < FILAS; i++ ) {
            suma += matriz[i][j];
        }
    }

    printf("Resultado de sumar todos los elementos por Columnas: %" PRId64 "\n", suma);

}