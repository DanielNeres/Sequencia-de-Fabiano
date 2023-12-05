#include<stdio.h>
#include<math.h> // chama a biblioteca "math.h" para efetuar cálculos com raizes e potencia

int main(){
	int numeroimprecao, i; 

	for (i = 10; i >= 0; i--) {
		numeroimprecao = (pow((1 + sqrt(5)), i) - (pow((1 - sqrt(5)), i))) /(pow(2, i) * sqrt(5));
        printf("%d\n", numeroimprecao);
    }
	return 0;
}
