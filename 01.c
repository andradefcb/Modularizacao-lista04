/*
Crie um aplicativo que receba o raio de uma esfera (do tipo double) e chame o método volumeEsfera para
calcular e exibir o volume da esfera na tela. Para cálculo do volume deve ser usada a fórmula: volume =
(4.0/3.0)*pi*raio2
*/

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <windows.h>

//Variáveis Globais
double raio = 0, volume = 0;

//Protótipo das funções
void lerRaio();
double volumeEsfera(double raio);
void mostrarResultado();

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    lerRaio();
    volume = volumeEsfera(raio);
    mostrarResultado();
}

void lerRaio(){
    printf("Insira o valor do raio da esfera (em m²): \n");
    scanf("%lf", &raio);
}

double volumeEsfera(double raio){
    return (4.0/3.0)*M_PI*pow(raio, 2);
}

void mostrarResultado(){
    printf("O volume da esfera é: %.2lf m²", volume);
}