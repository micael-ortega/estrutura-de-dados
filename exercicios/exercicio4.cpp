#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>


// 4. Faça uma função que verifique se um valor é perfeito ou não. 
//Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. 

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
	printf("Insira um valor inteiro e verifique se é um número perfeito: \n");
	scanf("%d", &n);
	check(n);
}

