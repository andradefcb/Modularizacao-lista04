/*
Crie um método chamado aleatório que sorteie uma determinada quantidade de números de acordo com
um argumento. O usuário deve informar a quantidade de números a ser gerada e a faixa de números
válidos para o sorteio, por exemplo: se o usuário informar os argumentos 4 e 100 (aleatório(4,100)),
devem ser gerados quatro números aleatórios entre 1 e 100.
*/

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

//Variáveis Globais
int quantidade = 0, range = 0;

//Protótipo dos Métodos
void inserirParametros();
int aleatorizar(int quantidade, int range);
void saida();

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    inserirParametros();
    aleatorizar(quantidade, range);
    saida();
}
void inserirParametros(){
    printf("Insira a quantidade de números que você deseja aleatorizar: \n");
    scanf("%d", &quantidade);
    printf("Insira o range dos números que você quer aleatorizar: \n");
    scanf("%d", &range);
}

int aleatorizar(int quantidade, int range){
    printf("Foram gerados os números:\n");
    printf("============================\n");
    for(int i = 0; i < quantidade; i++){
        int numero = 1 + rand() % range;
        printf("%d\n", numero);
    }
}   

void saida(){
    printf("===== PROGRAMA FINALIZADO =====\n");
}