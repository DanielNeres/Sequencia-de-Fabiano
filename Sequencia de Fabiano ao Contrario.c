#include<stdio.h>
#include<math.h>

int main(){
	int numeroimprecao, i = 10; 

	for (; i >= 0; i--) {
		numeroimprecao = (pow((1 + sqrt(5)), i) - (pow((1 - sqrt(5)), i))) /(pow(2, i) * sqrt(5));
        printf("%d\n", numeroimprecao);
    }
	return 0;
}
