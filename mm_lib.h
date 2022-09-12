/*************************************
*Fecha: 10 agosto 2022
*Autor: Yeison Lizcano
*Materia: Parallel and Dsitributed computing
*Tema: Introduccion a la programacion en C
*Organizacion por funciones de la APP
*Topico: Diseño de Benchmark
*Fase01: Multiplicacion de Matrices Clasico
**************************************/
#ifndef MM_LIB_H_INCLUDED
#define MM_LIB_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/time.h>
#include <time.h>

/* se trabaja con matrices cuadradas*/
//funciones
void tiempo_inicial();

void tiempo_final();

void inicializar_matrices_int(int N, int *matrizA, int *matrizB, int *matrizC);

void inicializar_matrices_int_rnd(int N, int *matrizA, int *matrizB, int *matrizC);

void imprimir_matriz_int(int N, int *matrizA);

void multiplicasion_matrices_int(int N, int *matrizA, int *matrizB, int *matrizC);

void inicializar_matrices_double(int N, double *matrizA, double *matrizB, double *matrizC);

void inicializar_matrices_double_rnd(int N, double *matrizA, double *matrizB, double *matrizC);

void imprimir_matriz_double(int N, double *matrizA);

void multiplicasion_matrices_double(int N, double *matrizA, double *matrizB, double *matrizC);

#endif
