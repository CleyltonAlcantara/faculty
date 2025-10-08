/*
- Criar um programa com aumento salarial de 6 porcento
*/

#include <stdio.h>

    int main(){
        float salario, aumento, novo_salario;

        printf("Digite o salário atual: ");
        scanf("%f", &salario);

        aumento = salario * 0.06;
        novo_salario = salario + aumento;

        printf("O novo salário com aumento de 6%% é: %.2f\n", novo_salario);

        return 0;
    }
