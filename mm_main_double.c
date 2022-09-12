/*************************************
*Fecha: 10 agosto 2022
*Autor: Yeison Lizcano
*Materia: Parallel and Dsitributed computing
*Tema: Introduccion a la programacion en C
*Organizacion por funciones de la APP
*Topico: Diseño de Benchmark
*Fase01: Multiplicacion de Matrices Clasico
**************************************/
#define RESERVA_MEMOIA (1024*1024*64*3)
static double MEN_CHUNK[RESERVA_MEMOIA];

#include "mm_lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/time.h>
#include <time.h>

int main(int argc, char *argv[]){
	//se pide la dimension de la matriz
	
	int N, SIZE;
    double *matrizA, *matrizB, *matrizC;

	N = (int)atoi(argv[1]);
	
	// se decalra las matrices
		
	SIZE= N*N;
	matrizA = MEN_CHUNK;
	matrizB = matrizA + SIZE;
	matrizC = matrizB + SIZE;
	
	//int matrizA[SIZE], matrizB[SIZE], matrizC[SIZE];
	
	inicializar_matrices_double(N, matrizA, matrizB, matrizC);
	
	//se imprimen las matrices


	//Se multiplican las matrices: Algoritmo clasico ( filas  x Columnas)
	
    tiempo_inicial();
    multiplicasion_matrices_double(N, matrizA, matrizB, matrizC);
	tiempo_final();

	// se imprime la matiz

	return 0;
}
