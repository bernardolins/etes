#include <stdio.h>
#include <stdlib.h> 

int janela(int f1, int f2, int f3){

	int janela_open = 0;
	int tam_f1 = f1 + 200; 
	int tam_f2 = f2 + 200; 
	int tam_f3 = f3 + 200; 

	if(f1 < 0 || f3 > 400){ return -1; }
	if(f2 > tam_f1){ janela_open += f2 - tam_f1; }
	if(f3 > tam_f2){ janela_open += f3 - tam_f2; }

	if(f1 > 0){
		janela_open += f1;
	}
	
	if(tam_f3 < 600){
		janela_open += 600-tam_f3;
	}
	janela_open *= 100;
	
	return janela_open;
}

int main(int argc, char *argv[]){

	FILE* fp = fopen(argv[1], "r");

	int janela1 = 0;
	int janela2 = 0;
	int janela3 = 0;

	char* linha = (char*)malloc(sizeof(char)*512);

	ssize_t read;
	size_t len = 0;

	getline(&linha, &len, fp);
	janela1 = atoi(linha);
	getline(&linha, &len, fp);
	janela2 = atoi(linha);
	getline(&linha, &len, fp);
	janela3 = atoi(linha);

	FILE* file = fopen(argv[2], "a");

	fprintf(file, "Saída de %s: %d\n", argv[0], janela(janela1,janela2,janela3));

	fclose(file);
	return 0;
}
