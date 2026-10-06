/*
Construa uma função que verifique, sem utilizar a função mod, se um número é divisível por outro.
*/

#include <stdio.h>
#include <windows.h>
#include <math.h>

//Globais
int a, b;


//Predict das Funções
void entrada();
int processamento(int a, int b);
void saida(int a, int b, int resultado);

//Main
int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    entrada();
    int resultado = processamento(a, b);
    saida(a, b, resultado);

    return 0;
}

void entrada(){
    printf("Insira o primeiro número: ");
    scanf("%d", &a);
    printf("Insira o segundo número: ");
    scanf("%d", &b);
}

int processamento(int a, int b){
    if(b == 0){
        printf("Divisão por zero não é permitida.\n");
        return -1;
    }
    return (a / b) * b == a;
}

void saida(int a, int b, int resultado){
    if(resultado == -1){
        return;
    }
    if(resultado){
        printf("%d é divisível por %d.\n", a, b);
    } else {
        printf("%d não é divisível por %d.\n", a, b);
    }
}