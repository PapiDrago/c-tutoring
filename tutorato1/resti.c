#include <stdio.h>

int main(void) {
	int importo = 1025679;
	printf("Importo totale: %d euro\n", importo);
	int n_50 = importo / 50; 

	importo = importo % 50;

	int n_20 = importo / 20;

	importo = importo % 20;

	int n_10 = importo / 10;

	importo = importo % 10;

	int n_5 = importo / 5;

	importo = importo % 5;

	int n_2 = importo / 2;

	importo = importo % 2;

	int n_1 = importo / 1;

	importo = importo % 1;

	printf("%d banconote da 50 euro\n", n_50);
	printf("%d banconote da 20 euro\n", n_20);
	printf("%d banconote da 10 euro\n", n_10);
	printf("%d banconote da 5 euro\n", n_5);
	printf("%d monete da 2 euro\n", n_2);
	printf("%d monete da 1 euro\n", n_1);

	return 0;

}