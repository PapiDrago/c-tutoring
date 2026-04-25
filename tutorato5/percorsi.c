#include <stdio.h>

int getIndexLastChar(char* s, char character) {
	int index = 0;
	for (int i = 0; s[i] != 0; i++) {
		if (s[i] == character) {
			index = i;;
		}
	}
	return index;
}


void extractBasename(char* path, char* basename) {
	char separator = '/';

	int start = getIndexLastChar(path, separator) +1;
	int i;
	for (i = 0; path[start] != 0; i++) {
		basename[i] = path[start];
		start++;
	}
	basename[i] = 0;
	//printf("%s\n", basename);
}



int main(int argc, char* argv[]) { // I could also write char** argv
	//printf("%d\n", argc);	// length of argv
	//printf("%s\n", argv[0]); // the executable basename
	//printf("%s\n", argv[1]); // the first argument passed on command line
	printf("[BASENAME]\n");
	char basename[1024];
	extractBasename(argv[argc-1], basename);
	printf("%s\n", basename);


	return 0;
}