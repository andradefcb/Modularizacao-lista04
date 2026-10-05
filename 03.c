/*
Crie um aplicativo que faça a contagem regressiva de um número inteiro informado pelo usuário. O
usuário deve informar também o espaço de tempo entre cada contagem (em segundos). Controle o tempo
com um método tempo() contido em outra classe. Crie uma nova classe para esse método do tempo()
ou aproveite do exemplo 3.
*/

#include <stdio.h>
#include <windows.h>

//Variáveis Globais
int tempo = 0, acc = 0, i = 0;

//Protótipo das funções
void inserirTempo();
int contador(int tempo);
void saida();

int main(){
    inserirTempo();
    contador(tempo);
    saida();
}

void inserirTempo(){
    printf("Insira o tempo desejado para cronometrar (em segundos): \n");
    scanf("%d", &tempo);
}

int contador(int tempo){
    acc = tempo;
    for(i = 1; i <= tempo; i++){
        printf("Contagem: %d\n", i);
        Sleep(1000);
    }
}

void saida(){
    printf("========== PROGRAMA ENCERRADO ===============\n");
}