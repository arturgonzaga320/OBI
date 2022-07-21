#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 0

int main(int argv, char** argc) {

	int D, A, N, total_dias, diaria, valor_final;

	scanf("%d", &D);
	scanf("%d", &A);
	scanf("%d", &N);


	if (N == 1) diaria = D;
	else {

		if (N <= 15) {
			diaria = D + (N-1) * A;
		}
		else {

			diaria = D + (15 - 1) * A;
		}

	}

	total_dias = 31 - (N-1);

	valor_final = total_dias * diaria;
	printf("%d", valor_final);

	return SUCESSO;
}