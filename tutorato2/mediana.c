#include <stdio.h>
#include <stdlib.h> //Required to use atoi and atof functions


int main() {
	int v[3] = {0, 0 ,0};

	//int v[7];

	int n = sizeof(v)/sizeof(v[0]);

	char s[80]; // Required to store the content from the input stream

	printf("Inserisci %d valori interi\n", n); // Aggiungi un controllo: solo caratteri numerici!
	for (int i = 0; i<n; i++) {
		printf("Inserisci il valore %d\n", i+1);
		fgets(s, sizeof(s), stdin);
		v[i] = atoi(s);
	}

	for (int i = 0; i<n; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}

	int tmp = 2147483647;
	for (int i = 0; i<n-1; i++) {
		for(int j = i + 1; j<n; j++) {
			if (v[j] < v[i]) {
				tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}
	}

	printf("Stampa dopo l'ordinamento.\n");
	for (int i = 0; i<n; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}

	printf("[MEDIANA]\n");
	printf("%d\n", v[n/2]);
	return 0;
}