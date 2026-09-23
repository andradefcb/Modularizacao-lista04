/*
Crie um aplicativo que receba uma temperatura qualquer em Farenheit e apresente seu correspondente
em Celsius por meio de um método. Para o cálculo utilize a seguinte fórmula: Celsius = 5.0/9.0*(f-32)
*/

#include <stdio.h>
#include <windows.h>

//Variáveis Globais
float celsius = 0, farenheit = 0;

//Prototipo de funções
void lerTempFarenheit();
float converterCelsius(float farenheit);
void mostrarConvertido();

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    lerTempFarenheit();
    celsius = converterCelsius(farenheit);
    mostrarConvertido();
}

void lerTempFarenheit(){
    printf("Insira a temperatura desejada (em Farenheit): \n");
    scanf("%f", &farenheit);
}

float converterCelsius(float farenheit){
    celsius = (5.0/9.0)*(farenheit-32);
    return celsius;
}

void mostrarConvertido(){
    printf("A temperatura convertida, em Celsius, é igual a: %.1f°C", celsius);
}