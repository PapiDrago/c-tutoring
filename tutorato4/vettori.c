#include <stdio.h>
#include <stdlib.h>

#define MINVOTO 18
#define MAXVOTO 30
#define NVOTI (MAXVOTO-MINVOTO+1)
#define NMAX 100

int getTargetIndex(int* v, int n, int target) {
	int i;
	for (i = 0; i < n; i++) {
		if (v[i] == target) {
			break;
		}
	}
	return i;
}


int max(int* v, int n) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		if(v[i] > max) {
			max = v[i];
		}
	}
	return max;
}

void istogramma(int* f, int* v, int n, int offset) {
	for (int i = 0; i<n; i++) {
		f[v[i]-offset]++;
	}
}

void bubbleSort(int* v, int n) {
	int tmp = 0;
	for(int i = 0; i<n-1; i++) {
		for(int j = i+1; j<n; j++) {
			if(v[i] > v[j]) {
				tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}
	}
}

void leggiValori(int* v, int n, int min, int max) {
	char s[80];
	for (int i = 0; i<n; i++) {
		while(1) {
			printf("Inserisci il valore numero %d.\n", i+1);
			fgets(s, sizeof(s), stdin);
			v[i] = atoi(s);
			if (v[i] >= min && v[i] <= max) {
				break;
			}
			printf("Errore! Hai inserito %d. Devi inserire un numero compreso tra %d e %d!\n", v[i], min, max);
		}
	}
}

void stampaVettore(int* v, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d\n", v[i]);
	}
}

int main(void) {
	int n = 0;

	printf("Inserisci il numero di elementi da memorizzare.\n");
	leggiValori(&n, 1, 0, NMAX);
	printf("n = %d\n", n);

	int v[n]; 

	leggiValori(v, n, MINVOTO, MAXVOTO);

	printf("[VALORI]\n");
	stampaVettore(v, n);

	bubbleSort(v, n);
	//printf("Vettore riordinato!\n");
	//stampaVettore(v, n);

	printf("[MINIMO]\n");
	printf("%d\n", v[0]);


	printf("[FREQUENZE]\n");
	int freq[NVOTI] = {0};
	istogramma(freq, v, n, MINVOTO);

	stampaVettore(freq, NVOTI);

	int maxfreq = max(freq, NVOTI);
	int max_index = getTargetIndex(freq, NVOTI, maxfreq);
	printf("[MAXFREQ]\n");
	printf("%d\n", max_index + MINVOTO);

	return 0;
}