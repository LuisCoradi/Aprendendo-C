#include <stdio.h>
int main(){
    float peso, altura, imc; //
    printf("Digite seu peso em kg \n"); // pede input de peso do usuario
    scanf("%f", &peso); // o usuario digita o peso
    getchar(); // Eliminar o enter após digitar
    
    printf("Digite sua altura em m \n"); // pede input de altura do usuario
    scanf("%f", &altura); // o usuario digita a altura
    getchar(); // Eliminar o enter após digitar

    float imc = peso / (altura * altura); // calcula o imc com os valores digitados
    if (imc < 18)  // se o valor calculado for menor que 18 o codigo retorna a mensagem abaixo
        printf("%.2f Esta abaixo do peso", imc); //essa é a mensagem se o IMC for baixo

        else if ((imc >= 18) && (imc < 25))
            printf("%.2f Peso normal", imc);
            //Se o IMC calculado ficar entre igual ou maior que 18 e menor que 25 o programa retorna a mensagem acima

            else if ((imc >= 25 ) && (imc < 30))
                printf("%.2f sobrepeso \n", imc);
                //Se o IMC calculado ficar maior ou igual a 25 e menor que 30 o progrema retorna a mensagem
   return 0;
}

