#include <stdio.h>

#define SUCESSO 0
#define As 10
#define Valete 11
#define Dama 12
#define Rei 13

// Comentário
int valoriza (char carta, char dom, char naipe) {
	int valor = 0;

	if (naipe == dom) valor += 4;

	switch (carta) {
	case 'A':
		valor += As;
		break;
	case 'J':
		valor += Valete;
		break;
	case 'Q':
		valor += Dama;
		break;
	case 'K':
		valor += Rei;
		break;
	}

	return valor;
}

int main(int argc,char** argv) {
	int i = 0;
	int Edu = 0;
	int Luana = 0;
	int valor;
	char dom, carta, naipe;


	scanf("%c %c", &carta, &dom);
	getchar();

	for (int i = 0; i < 3; i++) {

		scanf("%c %c", &carta, &naipe);
		getchar();

		valor = valoriza(carta, dom, naipe);
		Luana += valor;

		i++;
	}

	for (int i = 0; i < 3; i++) {

		scanf("%c %c", &carta, &naipe);
		getchar();

		valor = valoriza(carta, dom, naipe);
		Edu += valor;

		i++;
	}

	if (Edu == Luana) printf("empate");

	if (Edu > Luana) printf("Edu");
	if (Edu < Luana) printf("Luana");
	
	return SUCESSO;
}
