#include<stdio.h>

int main(){
	int numeroimprecao = 1, numeroanterior = 0, i; 
	// inicia um for que define o tamanho da sequência atravez da variavel i
	for(i = 0; i < 9; i++){
	// importante imprimir o numero antes que o valor seja modificado	
		printf("\n%d", numeroimprecao);
	// soma o numero de impreção a outra variavel, que contem o ultimo numero da sequencia, que no incio ela vale 0
		numeroimprecao += numeroanterior;
	// atualiza o numero anterior que foi usado na impreção, por meio da diferença entre o numero impreço e o numero anterior ao anterior deste, por exemplo 8, e feita a diferença entre 8 e dois numeros anteriores a ele, assim ficaria 8 - 3 = 5 que é o numero anterior a 8
		numeroanterior = numeroimprecao - numeroanterior;
	}
		return 0;
}
