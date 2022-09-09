#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>


// 3. Faça uma função que recebe por parâmetro um valor inteiro e positivo e 
// retorna o valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário. 

bool check(int n){
	bool t = true;
	if (n<=1){
		t = false;
	}
	else{
		for (int d = 2; d<n;d++){
			if (n%d == 0){
				t = false;
		}
	}
}
	return (t);
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	printf("Verifique se o número é primo\nInsira um valor inteiro e positivo: \n");
	scanf("%d", &n);
	printf("%d", check(n));
}

