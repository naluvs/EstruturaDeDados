#include <stdio.h>

int main(){
	int qtd, i;
	printf("Digite a quantidade de termos na sequência: ");
	scanf("%d", &qtd);
	printf("\nSequência de Fibonacci: \n");
	
	for(i=0; i<qtd; i++){
		printf("%d\t", fibonacci(i+1));
	}
}

int fibonacci(int num){
	int termo;
	if (num <= 2){
		return(1);
	}
	
	else{
		return(fibonacci(num-1) + fibonacci(num-2));
		return termo;
	}
}
