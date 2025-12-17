#include <stdio.h> 

int main(){

    int numero_a;
    numero_a = 10; 

    int numero_b; 
    numero_b = 20; 

    int resultado_1;  
    resultado_1 = numero_a * numero_b; 

    
    int numero_1a = 5; 
    int numero_1b = 4;

    int resultado2 = numero_1a * numero_b;

    // Adição 

    int parcelaA = 5; 
    int parcelaB = 10; 

    float resultadoAdicao = parcelaA + parcelaB;

    // Divisão 

    float numerador = 2; 
    float denominador = 3; 

    float resultadoDivisao1; 
    resultadoDivisao1 = numerador / denominador; 

    float dividendoA; 
    dividendoA = 5; 

    float divisorA; 
    divisorA = 2; 


    float resultadoDivisao2; 
    resultadoDivisao2 = dividendoA / divisorA;

    printf("%d x %d = %d\n", numero_a, numero_b, resultado_1);
    printf("=============\n");
    printf("%d x %d = %d\n", numero_1a, numero_1b, resultado2); 
    printf("=============\n");

    // Landscape, específicadores de formato. 
    // Específicando a quantidade de caracteres após a vírgula. 

    printf("%d + %d = %.2f\n", parcelaA, parcelaB, resultadoAdicao);

    printf("\n");

    printf("\nResultado Divisao 1:\n");
    printf("%.2f : %.2f = %.2f\n", numerador, denominador, resultadoDivisao1); 
    printf("\n");

    printf("%f : %f = %f", dividendoA, divisorA, resultadoDivisao2);
    printf("Hello world!");

    return 0;
}