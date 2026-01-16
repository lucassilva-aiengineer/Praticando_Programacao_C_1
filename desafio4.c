// Desafio 4 
#include <stdio.h>

// Criando uma calculadora simples, com cinco operações. 
int main(){

    int opcao;

    printf("Bem vindo a valculadora CalcMax!");
    printf("\n\n\nPara Fazer uma adicao digite 1"); 
    printf("\nPara Fazer uma subtracao digite 2");
    printf("\nPara Fazer uma multiplicacao digite 3"); 
    printf("\nPara Fazer uma divisao digite 4");
    printf("\nPara fazer uma raiz digite 5.");
    printf("\nPara fazer uma potenciacao digite 6."); 

    printf("Digite a sua opcao: ");
    scanf("%d", &opcao);

    // printf("A sua opcao: %d", opcao);

    // Termos da equação. 

    double numeroA; 
    double numeroB; 


    if (opcao == 1){

        printf("Adicao");
        printf("");

        printf("Parcela A: ");
        scanf("%lf", &numeroA);

        printf("Parcela B: ");
        scanf("%lf", &numeroB);

        double adicao = numeroA + numeroB; 

        printf("Resultado: ");
        printf("%.2lf + %.2lf = %.2lf",numeroA, numeroB, adicao); 

    } else if (opcao == 2){

        printf("Minuendo: ");
        scanf("%lf", &numeroA);

        printf("Subtraendo: ");
        scanf("%lf", &numeroB);

        double diferenca = numeroA - numeroB; 

        // printf("");

        printf("Resultado: ");
        printf("%.2lf - %.2lf = %.2lf", numeroA, numeroB, diferenca);

    } else if (opcao == 3){

        printf("Produto");
        // printf("");

        printf("Digite o fator A: ");
        scanf("%lf", &numeroA);

        printf("Digite o fator B: ");
        scanf("%lf", &numeroB); 

        double produto = numeroA * numeroB; 

        printf("Resultado: ");
        printf("%.2lf x %.2lf = %.2lf", numeroA, numeroB, produto); 

    } else if (opcao == 4){ 

        printf("Divisao\n"); 
        printf(""); 

        printf("Digite o numerador: ");
        scanf("%lf", &numeroA);

        printf("Digite o denominador: ");
        scanf("%lf", &numeroB); 

        double quociente;

        if (numeroB != 0){
            quociente = numeroA / numeroB; 

        } else {

            printf("Esta divisao nao pode ser feita!\n");
            print(" \"O Denominador e igual a zero\"");
        }

        printf("%.2lf : %.2lf = %.2lf", quociente);

    } else if (opcao == 5){

        printf("Potenciacao\n");
        printf(""); 

        printf("Indique a base: ");
        scanf("%lf", numeroA);

        printf("Indique o expoente: ");
        scanf("%lf", numeroB);

        double potenciacao;

        if (numeroA != 0 && numeroB != 0){

            potenciacao = numeroA ** numeroB;
        }

        printf("%.2lf elevado a %.2lf = %.2lf", numeroA, numeroB, potenciacao);
    }

    return 0;
}