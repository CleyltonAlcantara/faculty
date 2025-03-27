#include <stdio.h>

// Fornecer as seguintes informações:
// Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
// Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
// Nome da Cidade: O nome da cidade. Tipo: char[] (string)
// População: O número de habitantes da cidade. Tipo: int
// Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
// PIB: O Produto Interno Bruto da cidade. Tipo: float
// Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

    int main(){
    // Variáveis de cada atributo:
        char estado1[20], estado2[20];
        char codigo_carta1[4], codigo_carta2[3];
        char cidade1[20], cidade2[20];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int n_pontos_turisticos1, n_pontos_turisticos2;
    
    // Limpar tela para iniciar programa
    system("clear");

    // Cadastrando a carta 01:
    printf("CADASTRANDO A PRIMEIRA CARTA\n");
    printf("Digite o nome do estado: ");
    scanf("%19s", estado1);
    printf("Estado cadastrado: %s\n", estado1);
    codigo_carta1[0] = 'A';
    codigo_carta1[1] = '0';
    codigo_carta1[2] = '1';
    codigo_carta1[3] = '\0';
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Digite o nome da cidade: ");
    scanf("%19s", cidade1);
    printf("Cidade cadastrada: %s\n", cidade1);
    printf ("Digite o número populacional da cidade: ");
    scanf("%d", &populacao1);
    printf("População cadastrada: %d\n", populacao1);
    printf("Digite a área da cidade: ");
    scanf("%f", &area1);
    printf("Área cadastrado: %e km²\n", area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("PIB cadastrado: %e\n", pib1);
    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &n_pontos_turisticos1);
    printf("Número de pontos turísticos cadastrado: %d\n\n", n_pontos_turisticos1);

    // Cadastrando a carta 02:
    printf("CADASTRANDO A SEGUNDA CARTA\n");
    printf("Digite o nome do estado: ");
    scanf("%19s", estado2);
    printf("Estado cadastrado: %s\n", estado2);
    codigo_carta2[0] = 'B';
    codigo_carta2[1] = '0';
    codigo_carta2[2] = '1';
    codigo_carta2[3] = '\0';
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Digite o nome da cidade: ");
    scanf("%19s", cidade2);
    printf("Cidade cadastrada: %s\n", cidade2);
    printf ("Digite o número populacional da cidade: ");
    scanf("%d", &populacao2);
    printf("População cadastrada: %d\n", populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Área cadastrado: %e km²\n", area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("PIB cadastrado: %e\n", pib2);
    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &n_pontos_turisticos2);
    printf("Número de pontos turísticos cadastrado: %d\n\n", n_pontos_turisticos2);

    // Limpar tela para apresentar as cartas cadastradas
    system("clear");
    
    //Imprimindo carta 01
    printf("Carta 1:\n");
    printf("Estado: %19s\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %e\n km²", area1);
    printf("PIB: %e\n bilhões de reais", pib1);
    printf("Número de pontos turísticos: %d\n\n", n_pontos_turisticos1);
    
    //Imprimindo carta 02
    printf("Carta 2:\n");
    printf("Estado: %19s\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %e\n km²", area2);
    printf("PIB: %e\n bilhões de reais", pib2);
    printf("Número de pontos turísticos: %d\n\n", n_pontos_turisticos2);
    

    return 0;
    }
