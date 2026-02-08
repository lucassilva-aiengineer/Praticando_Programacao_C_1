// Criando um algoritmo que preenche listas de nomes 

#include <stdio.h> 
#include <math.h>

// int main(){


//     for (int i = 0; i <= 100; i ++){

//         printf("Continue\n");
//     }

//     return 0;
// }   

// 


// Criando um calculadora infinita. 

int main(){

    int opcao ; 

    printf("Bem vindo a super calculadora!\n");

    while(opcao != 0){

        printf("\nPara Somar digite 1.\n");
        // printf("\n");
        printf("Para Dividir Digite 2.\n");
        printf("Para Dividir Digite 3.\n");
        printf("Para Dividir Digite 4.\n");
        printf("Para Sair Digite 0\n"); 

        printf("Digite a sua opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1){

            double parcelaA; 
            double parcelaB; 

            double resultado; 


            printf("Digite a primeira parcela: ");
            scanf("%lf", &parcelaA); 

            printf("Digite a segunda parcela: ");
            scanf("%lf", &parcelaB);


            resultado = parcelaA + parcelaB;

            printf("============ Resultado ==========\n");
            printf("\n%.2lf + %.2lf = %.2lf\n", parcelaA, parcelaB, resultado);

        } else if (opcao == 2){

            printf("Subtraindo...");
            printf("\n"); 

            double minuendo;
            double subtraendo; 
            double resultado; 

            printf("Indique o minuendo: ");
            scanf("%lf", &minuendo);

            printf("Indique o subtraendo: ");
            scanf("%lf", &subtraendo);

            resultado = minuendo - subtraendo; 

            printf("=========== Resultado ===========\n");
            printf("\n%.2lf - %.2lf = %.2lf\n", minuendo, subtraendo, resultado);
        
        } else if(opcao == 3){

            printf("Multiplicacao...");
            printf("\n"); 

            double fatorA;
            double fatorB; 

            double resultado; 

            printf("Indique o primeiro fator: ");
            scanf("%lf", &fatorA);

            printf("Indique o segundo fator: ");
            scanf("%lf", &fatorB);

            resultado = fatorA * fatorB; 

            printf("========= Resultado =========\n");
            printf("\n%.2lf x %.2lf = %.2lf\n", fatorA, fatorB, resultado);


        } else if (opcao == 4){

            printf("Divisao...");
            printf("\n"); 

            double numerador; 
            double denominador; 

            double resultado; 

            printf("Indique o numerador: ");
            scanf("%lf", &numerador);

            printf("Indique o denominador: ");
            scanf("%lf", &denominador); 

            if (denominador != 0){

                resultado = numerador / denominador; 

                printf("============= Resultado ==============\n");
                printf("\n%.2lf : %.2lf = %.2lf\n", numerador, denominador, resultado);

            } else {

                printf("O denominador em uma divisao jamais pode ser 0!\n");

            }

        } else if (opcao == 5){ 

            printf("Potenciacao...");
            printf("\n");

            double base; 
            double expoente; 

            double resultado; 

            printf("Indique o valor da Base: ");
            scanf("%lf", &base);

            printf("Indique o expoente: ");
            scanf("%lf", &expoente); 

            if (base != 0 || expoente != 0){

                resultado = pow(base, expoente); 
                printf("======== Resultado ========\n");
                
                printf("\n%.2lf elevado a %.2lf = %.2lf\n", base, expoente, resultado);

            } else {

                printf("A base e o expoente nao podem ser zero ao mesmo tempo!");
            }
        }


    }
    return 0;
}