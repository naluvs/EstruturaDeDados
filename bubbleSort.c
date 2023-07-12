#include <stdio.h>
#define TAM 10
 
void bubbleSort(int *a, int n);

 // BubbleSort de complexidade de melhor caso O(n)

int main(){
	int cont, vetor[TAM] = {80,90,10,30,40,20,100,50,70,60};
	bubbleSort(vetor, TAM);
	for(cont=0; cont<TAM; cont++){
		printf("%d ", vetor[cont]);
	}
	return 0;
}
void bubbleSort(int *vetor, int tamanho){

	int trocou = 1;
	int i, j, aux;

	for(i=0; i<tamanho-1 && trocou == 1; i++){
		trocou = 0;
		
		for(j=0; j<tamanho-i-1; j++){
			if(vetor[j]>vetor[j+1]){ 
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
				trocou = 1;
			}
		}
	}
}