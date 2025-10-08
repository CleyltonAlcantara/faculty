/*
- Entrar com as notas do aluno (2 notas)
- Calcular a media (soma e divide por 2)
- exibir o resultado
*/

#include <stdio.h>

int main(){
    float nota1, nota2, media;

    printf("*** Programa de Cálculo de Média ***\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A média é: %.2f\n", media);

    return 0;
}