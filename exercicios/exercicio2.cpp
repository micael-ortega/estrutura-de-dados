#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

// 2. Escreva um procedimento que recebe as 3 notas de um aluno por par�metro e uma letra. 
//Se a letra for A o procedimento calcula a m�dia aritm�tica das notas do aluno, se for P, a sua m�dia ponderada (pesos: 5, 3 e 2). 

resultado (float x, float y, float z, char opcao){
	if (opcao == 'a'){
		float r = (x+y+z)/3;
		printf("%f",r);
		}
		else{
			if (opcao == 'p'){
				float r = (x*5+y*3+z*2)/10;
				printf("%f",r);
			}
			else{
				printf("Op��o inv�lida");
			}
		}
	}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char opcao = 'a';
	printf("a - para m�dia aritm�tica\np - para m�dia ponderada\n");
	float x, y, z;
	scanf("%c", &opcao);
	printf ("Insira nota 1: ");
	scanf ("%f", &x);
	printf ("Insira nota 2: ");
	scanf ("%f",&y);
	printf ("Insira nota 3: ");
	scanf ("%f",&z);
	printf("%f , %f, %f \n", x, y, z);
	
    resultado(x,y,z,opcao);
	
}

