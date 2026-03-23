#include <stdio.h>

int main(void) {
	int importo = 1025679;
	printf("Importo totale: %d euro\n", importo);
	int n_50 = importo / 50; 

	importo %= 50;

	int n_20 = importo / 20;

	importo %= 20;

	int n_10 = importo / 10;

	importo %= 10;

	int n_5 = importo / 5;

	importo %= 5;

	int n_2 = importo / 2;

	importo %= 2;

	int n_1 = importo / 1;

	importo %= 1;

	printf("%d banconote da 50 euro\n", n_50);
	printf("%d banconote da 20 euro\n", n_20);
	printf("%d banconote da 10 euro\n", n_10);
	printf("%d banconote da 5 euro\n", n_5);
	printf("%d monete da 2 euro\n", n_2);
	printf("%d monete da 1 euro\n", n_1);

	return 0;

}
/*
Note that when dividing two int values, the decimal part is discarded.
On the other hand if at least one of the operand is a floating
point value the decimal part is preserved.

*/