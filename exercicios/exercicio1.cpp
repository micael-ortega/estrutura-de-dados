#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 1. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.P .R3).

float volume(float r)
{	
	float v = (4.0/3.0)*3.14*pow(r,3);
    return (v);
}
main(){
	float r;
	printf ("Insira o valor do raio: ");
	scanf ("%f",&r);
	printf ("O volume da esfera é: %.1f", volume(r));
}

