/*
- Fornecer as seguintes informações:
- Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
- Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
- Nome da Cidade: O nome da cidade. Tipo: char[] (string)
- População: O número de habitantes da cidade. Tipo: int
- Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
- PIB: O Produto Interno Bruto da cidade. Tipo: float
- Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
- Densidade populacional (float) = População / Área
- PIB per capita (float) = PIB / População
*/

#include <stdio.h>
#include <stdlib.h> //Necessário para usar o system("cls") para limpar tela;

    int main(){
    // Variáveis de cada atributo:
        char estado1[20], estado2[20];
        char letra_carta1 = 'A', letra_carta2 = letra_carta1 + 1; //Letra da carta 2 é a próxima letra do alfabeto
        int numero_carta1 = 01, numero_carta2 = numero_carta1 + 1; //Número da carta 2 é o próximo número
        char cidade1[20], cidade2[20];
        float populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int n_pontos_turisticos1, n_pontos_turisticos2;
    
    // Limpar tela para iniciar programa
    system("cls");

    // Cadastrando a carta 01:
    printf("CADASTRANDO A PRIMEIRA CARTA\n");
    
    printf("Digite o nome do estado: ");
    scanf("%19s", estado1);
    printf("Estado cadastrado: %s\n", estado1);
    
    printf("Código da carta: %c%02d\n", letra_carta1, numero_carta1);
       
    printf("Digite o nome da cidade: ");
    scanf("%19s", cidade1);
    printf("Cidade cadastrada: %s\n", cidade1);
    
    printf ("Digite o número populacional da cidade: ");
    scanf("%f", &populacao1);
    printf("População cadastrada: %.3f\n", populacao1);
    
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Área cadastrado: %.3f km²\n", area1);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("PIB cadastrado: %.3f\n", pib1);
    
    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &n_pontos_turisticos1);
    printf("Número de pontos turísticos cadastrado: %d\n\n", n_pontos_turisticos1);

    // Cadastrando a carta 02:
    printf("CADASTRANDO A SEGUNDA CARTA\n");
    
    printf("Digite o nome do estado: ");
    scanf("%19s", estado2);
    printf("Estado cadastrado: %s\n", estado2);
    
    printf("Código da carta: %c%02d\n", letra_carta2, numero_carta2);
    
    printf("Digite o nome da cidade: ");
    scanf("%19s", cidade2);
    printf("Cidade cadastrada: %s\n", cidade2);
    
    printf ("Digite o número populacional da cidade: ");
    scanf("%f", &populacao2);
    printf("População cadastrada: %.3f\n", populacao2);
    
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Área cadastrado: %.3f km²\n", area2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("PIB cadastrado: %.3f\n", pib2);
    
    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &n_pontos_turisticos2);
    printf("Número de pontos turísticos cadastrado: %d\n\n", n_pontos_turisticos2);

    // Limpar tela para apresentar as cartas cadastradas
    system("cls");
    
    //Imprimindo carta 01
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %c%02d\n", letra_carta1, numero_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.3f\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", n_pontos_turisticos1);
    printf("Densidade populacional: %.3f habitantes por km²\n", populacao1 / area1);
    printf("PIB per capita: %.3f bilhões de reais por habitante\n\n", pib1 / populacao1);

    //Imprimindo carta 02
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %c%02d\n", letra_carta2, numero_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.3f\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", n_pontos_turisticos2);
    printf("Densidade populacional: %.3f habitantes por km²\n", populacao2 / area2);
    printf("PIB per capita: %.3f bilhões de reais por habitante\n\n", pib2 / populacao2);
    
    return 0;
}
