#include <stdio.h>
    float soma(float num1, float num2){
        float result = num1 + num2;
        return result;
    }
    float sub(float num1, float num2){
        float subt = num1 - num2;
        return subt;
    }

    int main () {

    float dinheiroT = 1000, saque = 0, deposito = 0;
    int senha, operacao, tentativas = 0;

   

        while (operacao != -1)
        {
            printf("Bem vindo ao ser caixa eletronico virtual!\n");
            printf("==============================================\n");
            printf("Para comecar, escolha uma opcao a ser feita: \n");
            printf("DEPOSITO ----------------- DIGITE [1] \n");
            printf("VIZUALISAR EXTRATO ------- DIGITE [2] \n");
            printf("SACAR -------------------- DIGITE [3] \n");
            printf("==============================================\n");
            scanf("%d", &operacao);
                
            switch (operacao){
                case 1: 
                printf("Digite o valor a ser depositado: ");
                scanf("%f", &deposito);
                dinheiroT = soma(deposito, dinheiroT);
                printf("Saldo atualizado com sucesso! \n");
                break;

                case 2:
                printf("Para consultar seu saldo, insira a senha: ");
                scanf("%d", &senha);
                    if(senha == 1234){
                        printf("Seu saldo atual eh de: %.2f\n", dinheiroT);
                    }
                    else{
                        printf("!!!SENHA INCORRETA!!!\n");
                        tentativas++;
                    }
                break;

                case 3:
                printf("Informe a senha para realizar o saque: ");
                scanf("%d", &senha);
                    if(senha == 1234){
                        printf("Voce tem %.2f em conta disponivel para saque, informe o valor a ser sacado: \n", dinheiroT);
                        scanf("%f", &saque);
                            if(saque <= dinheiroT){
                                dinheiroT = sub(dinheiroT, saque);
                                printf("Seu saque foi aprovado, agora voce possui %.2f em conta \n", dinheiroT);                                
                            }
                            else{
                                printf("A quantia informada eh maior do que seu saldo, por isso nao foi aprovado o saque.\n");
                            }
                    }
                    else{
                        printf("!!!SENHA INCORRETA!!!\n");
                        tentativas++;
                    }
                break;               
            }

          if(tentativas > 3){
            break;
          }
        }
        
    return 0;
}