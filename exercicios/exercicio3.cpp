#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>


// 3. Fa�a uma fun��o que recebe por par�metro um valor inteiro e positivo e 
// retorna o valor l�gico Verdadeiro caso o valor seja primo e Falso em caso contr�rio. 

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
	printf("Verifique se o n�mero � primo\nInsira um valor inteiro e positivo: \n");
	scanf("%d", &n);
	printf("%d", check(n));
}

