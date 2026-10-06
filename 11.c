/*
Necessita-se calcular alguns dados correspondentes aos animais de uma fazenda. Os animais pertencem
a espécies diferentes, a saber: bovinos, ovinos e caprinos. Construa uma função para calcular a média
de peso de cada espécie para os animais de sexo feminino e do sexo masculino, a partir de dados
fornecidos pelo usuário.
*/

#include <stdio.h>
#include <windows.h>

int sexo, quantidade, quantidade_masculino = 0, quantidade_feminino = 0;
float peso, soma_peso_masculino = 0, soma_peso_feminino = 0;

float menu_bovinos();
float menu_ovinos();
float menu_caprinos();
float saida(float *soma_peso_masculino, float *soma_peso_feminino, int *quantidade_masculino, int *quantidade_feminino);

int main(){
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    menu_bovinos();
    menu_ovinos();
    menu_caprinos();
    saida(&soma_peso_masculino, &soma_peso_feminino, &quantidade_masculino, &quantidade_feminino);

    return 0;
}

float menu_bovinos(){
    printf("Insira a quantidade de bovinos: \n");
    scanf("%d", &quantidade);
    for(int i = 0; i < quantidade; i++){
        printf("Insira o peso do bovino %d: \n", i + 1);
        scanf("%f", &peso);
        printf("Insira o sexo do bovino %d (1 para masculino, 2 para feminino): \n", i + 1);
        scanf("%d", &sexo);
        if(sexo == 1){
            soma_peso_masculino += peso;
            quantidade_masculino++;
        } else if(sexo == 2){
            soma_peso_feminino += peso;
            quantidade_feminino++;
        } else {
            printf("Sexo inválido. Insira 1 para masculino ou 2 para feminino.\n");
            i--; // Decrementa o contador para repetir a entrada
        }
    }
    return 0;
}

float menu_ovinos(){
    int sexo, quantidade, quantidade_masculino = 0, quantidade_feminino = 0;
    float peso, soma_peso_masculino = 0, soma_peso_feminino = 0;
    printf("Insira a quantidade de ovinos: \n");
    scanf("%d", &quantidade);
    for(int i = 0; i < quantidade; i++){
        printf("Insira o peso do ovino %d: \n", i + 1);
        scanf("%f", &peso);
        printf("Insira o sexo do ovino %d (1 para masculino, 2 para feminino): \n", i + 1);
        scanf("%d", &sexo);
        if(sexo == 1){
            soma_peso_masculino += peso;
            quantidade_masculino++;
        } else if(sexo == 2){
            soma_peso_feminino += peso;
            quantidade_feminino++;
        } else {
            printf("Sexo inválido. Insira 1 para masculino ou 2 para feminino.\n");
            i--; // Decrementa o contador para repetir a entrada
        }
    }
    return 0;
}

float menu_caprinos(){
    int sexo, quantidade, quantidade_masculino = 0, quantidade_feminino = 0;
    float peso, soma_peso_masculino = 0, soma_peso_feminino = 0;
    printf("Insira a quantidade de caprinos: \n");
    scanf("%d", &quantidade);
    for(int i = 0; i < quantidade; i++){
        printf("Insira o peso do caprino %d: \n", i + 1);
        scanf("%f", &peso);
        printf("Insira o sexo do caprino %d (1 para masculino, 2 para feminino): \n", i + 1);
        scanf("%d", &sexo);
        if(sexo == 1){
            soma_peso_masculino += peso;
            quantidade_masculino++;
        } else if(sexo == 2){
            soma_peso_feminino += peso;
            quantidade_feminino++;
        } else {
            printf("Sexo inválido. Insira 1 para masculino ou 2 para feminino.\n");
            i--; // Decrementa o contador para repetir a entrada
        }
    }
    return 0;
}

float saida(float *soma_peso_masculino, float *soma_peso_feminino, int *quantidade_masculino, int *quantidade_feminino){
    float med_bov_masc, med_bov_fem, med_cap_masc, med_cap_fem, med_ovi_masc, med_ovi_fem;
    med_bov_masc = *soma_peso_masculino / *quantidade_masculino;
    med_bov_fem = *soma_peso_feminino / *quantidade_feminino;
    med_cap_masc = *soma_peso_masculino / *quantidade_masculino;
    med_cap_fem = *soma_peso_feminino / *quantidade_feminino;
    med_ovi_masc = *soma_peso_masculino / *quantidade_masculino;
    med_ovi_fem = *soma_peso_feminino / *quantidade_feminino;

    printf("Média de peso dos bovinos masculinos: %.1fkg\n", med_bov_masc);
    printf("Média de peso dos bovinos femininos: %.1fkg\n", med_bov_fem);
    printf("Média de peso dos caprinos masculinos: %.1fkg\n", med_cap_masc);
    printf("Média de peso dos caprinos femininos: %.1fkg\n", med_cap_fem);
    printf("Média de peso dos ovinos masculinos: %.1fkg\n", med_ovi_masc);
    printf("Média de peso dos ovinos femininos: %.1fkg\n", med_ovi_fem);
    printf("=============== PROGRAMA ENCERRADO ===============\n");
    return 0;
}