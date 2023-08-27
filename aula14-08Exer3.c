#include <stdio.h>

int main ()
{
    int numero, divisores;

    printf("DIgite um numero: ");
    scanf("%d", &numero);

        while (numero > 1)
        {
            divisores = 0;

                for(int i = 1; i <= numero; i++){
                    if(numero % i == 0){
                        divisores++;
                    }
                }
            if(divisores == 2){
                printf("O numero %d eh primo.\n", numero);
            }
            else {
                printf("O numero %d nao eh primo.\n", numero);
            }
            printf("Digite um  numero: ");
            scanf("%d", &numero);
        }
        


    return 0;
}