#!/usr/bin/perl

=begin
Fecha: 26 - 08 - 2022
Autor: Yeison Lizcano
Tema: automatizacion de bateria de experimentos
Materia: computacion paralela y distribuida
Requerimientos:
    -vector de banchmarks
    -vector de cargas
    -N: repetition
    -La idea es iterar por ejecutables*cargas*repeticiones
=cut

#se crea el vector de ejecutables

@Ejecutables = ("mm_main_int","mm_main_int_rnd","mm_main_double","mm_main_double_rnd");
@Carga = ("300","500","700","900","1100","1200","1400","1600","1700","1800","1900","2000");
$N = 30;

foreach $exes (@Ejecutables){
    foreach $carga (@Carga){
        $file = "Soluciones/"."$exes"."_$carga"."txt";
        for($i=0;$i<$N;$i++){
            system("./$exes $carga >> $file");
        }
        close($file);
    }
}
