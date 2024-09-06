#include <stdio.h>

void mergesort(int A[], int inicio, int fim, int x);
void intercala(int A[], int inicio, int fim, int meio, int x);

int main(){
	int x;
	printf("Digite a quantidade de numeros que deseja ordenar: \n");
	scanf("%d", &x);
	int vetor[x], i;
	for(i=0;i<x;i++){
		printf("Digite o %d termo: ", i+1);
		scanf("%d", &vetor[i]);
	}
	mergesort(vetor, 0, x-1, x);
	for(i=0;i<x;i++){
		printf("%d\t", vetor[i]);
	}
}

void mergesort(int A[], int inicio, int fim, int x){
	int meio;
	if(inicio<fim){
		meio = (inicio+fim)/2;
		mergesort(A, inicio, meio, x);
		mergesort(A, meio+1, fim, x);
		intercala(A, inicio, fim, meio, x);
	}
}

void intercala(int A[], int inicio, int fim, int meio, int x){
	int i, aux[x], poslivre = inicio, inicioA1=inicio, inicioA2=meio+1;
	while(inicioA1<=meio && inicioA2<=fim){
		if(A[inicioA1]>A[inicioA2]){
			aux[poslivre]=A[inicioA2];
			inicioA2++;
		}
		else{
			aux[poslivre]=A[inicioA1];
			inicioA1++;
		}
	poslivre++;
	}
	for(i=inicioA1;i<=meio;i++){
		aux[poslivre]=A[i];
		poslivre++;
	}
	for(i=inicioA2; i<=fim;i++){
		aux[poslivre]=A[i];
		poslivre++;
	}
	for(i=inicio;i<=fim;i++){
		A[i]=aux[i];
	}
}

