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


void extractBasename(char* path, char* basename, char separator) {

	int start = getIndexLastChar(path, separator) +1;
	int i;
	for (i = 0; path[start] != 0; i++) {
		basename[i] = path[start];
		start++;
	}
	basename[i] = 0;
	//printf("%s\n", basename);
}

void extractDirname(char* path, char* dirname, char separator) {
	int end = getIndexLastChar(path, separator);
	for (int i = 0; i < end; i++) {
		dirname[i] = path[i];
	}
	dirname[end] = 0;
}

int isAbsolute(char* path) {
	if (path[0] == '/') {
		return 1;
	}
	return 0;
}


int main(int argc, char* argv[]) { // I could also write char** argv
	//printf("%d\n", argc);	// length of argv
	//printf("%s\n", argv[0]); // the executable basename
	//printf("%s\n", argv[1]); // the first argument passed on command line
	
	//char path[1024] = argv[argc-1]; // It does not work. I should implement smth like strcopy
	
	printf("[BASENAME]\n");
	char basename[1024];
	extractBasename(argv[argc-1], basename, '/');
	printf("%s\n", basename);
	
	printf("[DIRNAME]\n");
	char dirname[1024];
	extractDirname(argv[argc-1], dirname, '/');
	printf("%s\n", dirname);

	printf("[TIPO]\n");
	if (isAbsolute(argv[argc-1])) {
		printf("assoluto\n");
	} else {
		printf("relativo\n");
	}

	printf("ESTENSIONE\n");
	char extension[1];
	extractBasename(basename, extension, '.');
	if (extension[0]) {
		printf("%s\n", extension);
	} else {
		printf("nessuna\n");
	}

	return 0;
}