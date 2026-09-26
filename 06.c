/*
Construa uma função que verifique se um dado número é divisível por outro. Ambos devem ser fornecidos
pelo usuário.
*/

#include <stdio.h>
#include <math.h>
#include <windows.h>

//Variáveis Globais
float n1, n2;
int resultado;

//Protótipo de Modulação
void entradadedivisores();
int verificacao(int n1, int n2);
void saida(int resultado);

int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    entradadedivisores();
    verificacao(n1, n2);
    return 0;
}

void entradadedivisores(){
    printf("===============================\n");
    printf("Insira o primeiro valor: \n");
    scanf("%f", &n1);
    printf("Insira o segundo valor: \n");
    scanf("%f", &n2);
    printf("===============================\n");
}

int verificacao(int n1, int n2){
    if(n1 % n2 == 0){
        printf("%d é divisível por %d\n", n1, n2);
    } else {
        printf("%d não é divisível por %d\n", n1, n2);
    }
}
