#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>


// 4. Fa�a uma fun��o que verifique se um valor � perfeito ou n�o. 
//Um valor � dito perfeito quando ele � igual a soma dos seus divisores excetuando ele pr�prio. 

bool check(int n){
	bool t = true;
	int soma = 0;
	for (int i=1;i<n;i++){
		if (n%i == 0){
			soma=soma+i;
		}
	}
	if (n == soma){
		printf("%d",t);
	}
	else{
		t = false;
		printf("%d",t);
	}
}

	




main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	printf("Insira um valor inteiro e verifique se � um n�mero perfeito: \n");
	scanf("%d", &n);
	check(n);
}

