/* 
--------------------------------------------------------------
Estudiante: Diana Carolina Quintero Bedoya
Correo: diana.quintero01@correo.usa.edu.co 
Carrera: Ciencia Computacional e Inteligencia Artificial
Estudiante: David Fernando Cruz Martinez
Correo: david.cruz01@correo.usa.edu.co
Carrera: Ingenieria de Sistemas y Telecomunicaciones
Profesor: John Jairo Corredor Franco
MATERIA: Computacion Paralela y Distribuida
UNIVERSIDAD SERGIO ARVOLEDA
FECHA: 22/04/2021 
--------------------------------------------------------------
Polinomios de Hermite

Todos los polinomios de Hermite de orden n>2 se pueden expresar 
en términos de los dos primeros polinomios H0(x) y H1(x), 
de orden cero y uno respectivamente, mediante la siguiente 
relación de recurrencia.

Hn(x)=2x⋅Hn−1(x)−2(n−1)Hn−2(x)
--------------------------------------------------------------
*/

#include <stdlib.h>
#include <stdio.h>
#include "herminatePolinomial.h"

int main(int argc, char **argv){
    int n = (int) atof(argv[1]);
    int x = (int) atof(argv[2]);
    printf("%d\n", herminate(n,x));
}
