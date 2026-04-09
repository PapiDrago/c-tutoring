// Metodo del contadino russo. Vogliamo elevare 'a' alla 'b'
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double elevazione(double risultato, double a, int exp) {
	if (!exp) {
		printf("risultato = %f\n", risultato);
		return risultato;
	}
	if (exp % 2) { //exp dispari quando exp % 2 restituisce un numero > 0, quindi associato a 'TRUE'
		printf("BU\n");
		risultato = risultato * a;
	}
	a = a * a;
	exp = exp / 2; // exp = floor(exp / 2);
	printf("exp = %d\n", exp);
	return elevazione(risultato, a, exp);
}


int main(void) {
	
	double a = 0;
	int exp = 0;
	char s[80];

	printf("Inserisci la base, può essere un numero frazionario.\n");
	fgets(s, sizeof(s), stdin);
	a = atof(s);
	printf("Hai inserito %f\n", a);
	
	printf("Inserisci l'esponente, deve essere un numero intero positivo.\n");
	fgets(s, sizeof(s), stdin);
	exp = atoi(s);
	printf("Hai inserito %d\n", exp);

	double risultato = 1;
	risultato = elevazione(risultato, a, exp);


	printf("[POTENZA]\n");
	printf("%f\n", risultato);
	return 0;
}
