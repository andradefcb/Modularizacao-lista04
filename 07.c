/*
Faça uma função que possibilite o arredondamento de um número real para um número inteiro seguindo
os padrões científicos.
*/

#include <stdio.h>
#include <math.h>
#include <windows.h>

float numero = 0, arredondado = 0;

void entrada();
float arredondamento(float numero);
void saida();

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    entrada();
    arredondamento(numero);
    saida();

    return 0;
}

void entrada(){
    printf("Insira o valor que você deseja arredondar:\n");
    scanf("%f", &numero);
}

float arredondamento(float numero){
    arredondado = round(numero);
    return arredondado;
}

void saida(){
    printf("O número arredondado é igual a: %.2f", arredondado);
}