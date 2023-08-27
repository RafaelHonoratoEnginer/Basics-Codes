#include <stdio.h>
int main (){
float litros;
int escolha;

printf("Para gasolina digite 1\n");
printf("Para alcool digite 2\n");
printf("Para diesel digite 3\n");
printf("--------------------------------------------\n");


printf("Escolha um tipo de combustivel: ");
scanf("%i", &escolha);

printf("Digite a quantidade de litros: ");
scanf("%f", &litros);

if (escolha==1){
    printf("Voce escolheu gasolina e ira pagar: %.2f", litros*5.1);
}
 if (escolha==2){
    printf("Voce escolheu alcool e ira pagar: .2f", litros*4.5);
}
 if (escolha==3){
    printf("Voce escolheu diesel e ira pagar:, %.2f", litros*5.25);
}



return 0;
}
