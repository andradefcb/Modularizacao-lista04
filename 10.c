/*
Escreva uma função que calcule o mdc de dois números fornecidos pelo usuário.
*/

#include <stdio.h>
#include <windows.h>

//Globais
int a, b, resultado;

//Protótipo das Funções
void entrada();
int mdc(int a, int b);
void saida(int a, int b, int resultado);

//Main
int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    entrada();
    resultado = mdc(a, b);
    saida(a, b, resultado);

    return 0;
}

void entrada(){
    printf("Insira o primeiro valor: \n");
    scanf("%d", &a);
    printf("Insira o segundo valor: \n");
    scanf("%d", &b);
}

int mdc(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void saida(int a, int b, int resultado){
    printf("O mdc de %d e %d é: %d\n", a, b, resultado);
}