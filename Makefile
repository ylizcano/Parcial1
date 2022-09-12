#*************************************
#Fecha: 10 agosto 2022
#Autor: Yeison Lizcano
#Materia: Parallel and Dsitributed computing
#Tema: Introduccion a la programacion en C
#Organizacion por funciones de la APP
#Topico: Diseño de Benchmark
#Fase01: Multiplicacion de Matrices Clasico
#*************************************/

GCC = gcc
GFLAGS = -ansi -pedantic -Wall -std=c99 -D_POSIX_C_SOURCE=199309L
PROGRAMAS = mm_main_int mm_main_int_rnd mm_main_double mm_main_double_rnd


all: $(PROGRAMAS)

mm_main_int:
	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) -c mm_lib.c
	$(GCC) $(GFLAGS) -o $@ $@.o mm_lib.o

mm_main_int_rnd:
	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) -c mm_lib.c
	$(GCC) $(GFLAGS) -o $@ $@.o mm_lib.o

mm_main_double:
	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) -c mm_lib.c
	$(GCC) $(GFLAGS) -o $@ $@.o mm_lib.o

mm_main_double_rnd:
	$(GCC) $(GFLAGS) -c $@.c
	$(GCC) $(GFLAGS) -c mm_lib.c
	$(GCC) $(GFLAGS) -o $@ $@.o mm_lib.o




clean:
	$(RM) *.o  $(PROGRAMAS)
