#include <stdio.h>
#define T 7

void sequencial(int A[], int x){
	int achei = 0;
	int i = 0;
	while(achei != 1 && i<T){
		if(A[i] == x){
			achei = 1;
			printf("Elemento encontrado na posicao: %d", i+1);
		}
		else
			i++;
		}
	if(achei == 0)
		printf("Elemento nao se encontra no vetor.");
	}

int main(){
	int num, A[T]={15,30,25,12,50,10,9}; //exemplo
	printf("Numero a ser buscado: ");
	scanf("%d", &num);
	sequencial(A, num);
	
}
