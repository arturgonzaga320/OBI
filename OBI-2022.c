
#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 0


int main(int argv, char** argc) {

	int N, S;
	int aux = 1;
	int S_vetor = 0;
	int* vetor;

	scanf("%d", &N);
	scanf("%d", &S);

	if (N == 0) {
		printf("0");
		return SUCESSO;
	}

	// Aloca vetor

	vetor = (int*)malloc(sizeof(int) * N); 

	for (int i = 0; i < N; i++) {
		int num;
		scanf("%d", &num);
		vetor[i] = num;
		S_vetor += vetor[i];
	}

	if (S % S_vetor == 0) {

		while (S_vetor != S) {
			
			S_vetor += S_vetor;
			aux++;
			N = N * aux;
		}

		printf("%d", N);
	}
	else printf("0");
	
	return SUCESSO;
}