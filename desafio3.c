// Desafio 3 

#include <stdio.h>

int main(){

    // Declaração 

        double peso;
        double altura; 
        double imc;  


        printf("Indique o seu peso (kg):  ");
        scanf("%lf", &peso);

        printf("Indique a sua altura (Metros): ");
        scanf("%lf", &altura); 

        imc = peso / (altura * altura); // Inicialização 

        printf("O seu IMC: %.2lf\n", imc);

        // Verificando o seu IMC 


        if (imc < 18.5){

            printf("Magreza");

        } else if (imc < 24.5){

            printf("Estado: Normal");

        } else if (imc < 29.9){

            printf("Estado: Sobrepeso");

        } else if (imc < 34.9){

            printf("Estado: Obesadade Grau I");

        } else if (imc < 39.9){
            printf("Estado: Obesadade Grau II"); 

        } else {

            printf("Estado: Obesidade Grau III");
        }

        return 0; 
}

// Operadores de comparação 

// == 
// >= 
// >
// <
// <= 
// != 
