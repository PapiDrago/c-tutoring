#include <stdio.h>
#include <stdlib.h>

#define MINVOTO 18
#define MAXVOTO 30
#define NVOTI (MAXVOTO-MINVOTO+1)
#define NMAX 100

int main(void) {
	int n = 0;
	char s[80];

	printf("Inserisci il numero di elementi da memorizzare.\n");
	fgets(s, sizeof(s), stdin);
	n = atoi(s);

	if (n <= 0 || n > NMAX) {
		printf("[RISULTATO]\nerrore\n");
		return 0;
	} 

	int v[n]; 

	for (int i = 0; i<n; i++) {
		while(1) {
			printf("Inserisci il valore numero %d.\n", i+1);
			fgets(s, sizeof(s), stdin);
			v[i] = atoi(s);
			if (v[i] >= MINVOTO && v[i] <= MAXVOTO) {
				break;
			}
			printf("Errore! Hai inserito %d. Devi inserire un numero compreso tra %d e %d!\n", v[i], MINVOTO, MAXVOTO);
		}
	}

	printf("[VALORI]\n");
	for (int i = 0; i < n; i++) {
		printf("%d\n", v[i]);
	}

	printf("[MINIMO]\n");
	int min = MAXVOTO + 1;
	for (int i = 0; i<n; i++) {
		if (v[i] < min) {
			min = v[i];
		}

	}
	printf("%d\n", min);


	printf("[FREQUENZE]\n");
	int freq[NVOTI] = {0};
	for (int i = 0; i<n; i++) {
		freq[v[i]-MINVOTO]++;
	}
	for (int i = 0; i < NVOTI; i++) {
		printf("%d\n",freq[i]);
	}

	int index = 0;
	int maxfreq = -1;
	printf("[MAXFREQ]\n");
	for (int i = 0; i < NVOTI; i++) {
		if(freq[i] > maxfreq) {
			maxfreq = freq[i];
			index = i;
		}
	}
	printf("%d\n", index + MINVOTO);

	return 0;
}