#include <stdio.h>
int main ()
{
    int i = 0;
    char pagamento;
    float valor, valorT = 0, valorD = 0, valorP = 0, valorC = 0, soma;

        for(i = 0; i < 10; i++){
            printf("Infome a o valor da compra: ");
            scanf("%f", &valor);
            
            printf("Informe a forma de pagamento:\n[CARTAO(C) PIX(P) DINHEIRO(D)]");
            fflush(stdin);
            scanf("%c", &pagamento);
            
            
                if(pagamento == 'd' || pagamento == 'D'){
                    valorD += valor;
                }
                else if(pagamento == 'c' || pagamento == 'C'){
                    valorC += valor;
                }
                else if(pagamento == 'p' || pagamento == 'P'){
                    valorP += valor;
                }
               
        }
    valorT = (valorC+valorD+valorP);    

    printf("O valor pago em cartao eh de: %.2f\n", valorC);
    printf("O valor paga em dinheiro eh de: %.2f\n", valorD);
    printf("O valor pago em pix eh de: %.2f\n", valorP);
    printf("O valro total das compras eh de: %.2f\n\n\n", valorT);

    return 0;
}