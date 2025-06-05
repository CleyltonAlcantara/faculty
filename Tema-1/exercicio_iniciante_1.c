#include <stdio.h>

int main(){
    char nome[50];
    int idade;
    float altura;
    char opcao;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Seu nome é: %s\n\n", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade é: %d\n\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %.2f\n\n", altura);

    printf("Digite uma opção: ");
    scanf(" %c", &opcao);   
    printf("Sua opção é: %c\n\n", opcao);


    /* 
    SINTAXE BÁTICA (scanf)
    scanf("formato", &variavel);

    ESPECIFICADORES DE FORMATO: (printf)
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    */

}
