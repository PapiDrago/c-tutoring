#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s[80];
	int n;
	puts("[OUTPUT]");
		do {
			fgets(s, sizeof(s), stdin);
			n = atoi(s);
			if (n > 10) {
				printf("%d > 10: non ammesso\n", n);
			} else if (n < 11 && n >= 0) {
				printf("Valore immesso: n = %d\n", n);
			}
		} while (n >= 0);
		printf("%d < 0: uscita dal loop...\n", n);
		printf("Programma terminato");
	return 0;
}