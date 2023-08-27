#include <stdio.h>
int main (){
float valor;
int escolha;

printf("Insira aqui o valor da peca: ");
scanf("%f", &valor);

printf("Para pagar via PIX digite: 1\n");
printf("Para pagar via cartao de debito digite: 2\n");
printf("Para pagamento via credito digite: 3\n");
printf("Para parcelamento digite: 4\n");

printf("Digite aqui o meio de pagamento: ");
scanf("%i", &escolha);

if (escolha==1){
    printf("O valor a ser pago com base no desconto eh: %2.f",valor-valor*0.1);
}
if (escolha==2) {
    printf("O valor a ser pago com base no desconto eh: %2.f",valor-valor*0.05);
}
if (escolha==3) {
    printf("O valor a ser pago com base no desconto eh: %2.f",valor-valor*0.2);
}
if (escolha==4){
    printf("O valor a ser pago com base no desconto eh: %2.f", valor);
}

return 0;
}
