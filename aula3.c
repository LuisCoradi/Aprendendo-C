#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    printf("digite um numero menor que 0 OU maior que 10");
    scanf("%i",&valor);
    if(valor < 0 || valor > 10)
        printf("Numero Valido");

        else{
            if (valor >= 1 && valor <=5)
            printf("parcialmente correto");
                  else
                  printf ("Numero Invalido");
        }
        // Pode-se tambem fazer da forma seguinte

    return 0;
}
