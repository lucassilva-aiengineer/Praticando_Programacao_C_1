#include <stdio.h> 

int main(){

    int parcelaA; 
    parcelaA = 10; 

    int parcelaB;
    parcelaB = 20; 


    float soma; 

    soma = parcelaA + parcelaB; 

    printf("%d + %d = %.2f", parcelaA, parcelaB, soma);

    
    // subtração. 

    int fatorA; 
    fatorA = 2; 

    int fatorB; 
    fatorB = 4; 

    float produto = fatorA * fatorB; 

    printf("Produto: \n");
    printf("%d x %d = %.2f", fatorA, fatorB, produto); 


    printf(10 * 5);

    return 0;

}