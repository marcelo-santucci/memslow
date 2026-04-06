/*
*
* Sistemas Operativos
*
* Programa que permite determinar el tiempo que demora calcular la suma de todas las posiciones de una matriz
* efectuando el calculo sumando todos los valores de una fila antes de pasar a la siguiente.
*
*/
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

#define FILAS 100000
#define COLS 10000

int matriz[FILAS][COLS];  //4Gb

int main () {
    for (int i=0; i < FILAS; i++) {
        for(int j=0; j < COLS; j++) {
            matriz[i][j] = rand();
        }
    }

    int64_t suma = 0;
    for (int i=0; i < FILAS; i++) {
        for(int j=0; j < COLS; j++) {
            suma += matriz[i][j];
        }
    }

        printf("Resultado de sumar todos los elementos por Filas: %" PRId64 "\n", suma);

}