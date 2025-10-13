
#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Nivel Mestre\n");

    // CARTA 01
    char carta01[50], codigo01[50], estado01[50], cidade01[50];
    unsigned long int populacao01;
    int pontosTuristicos01;
    float area01, PIB01;
    float densidade01, PIBPerCapita01, super_poder01;

    // CARTA 02
    char carta02[50], codigo02[50], estado02[50], cidade02[50];
    unsigned long int populacao02;
    int pontosTuristicos02;
    float area02, PIB02;
    float densidade02, PIBPerCapita02, super_poder02;

   
    printf("Digite o nome da carta 1: ");
    scanf("%s", carta01);
    printf("Digite o codigo: ");
    scanf("%s", codigo01);
    printf("Digite o estado: ");
    scanf("%s", estado01);
    printf("Digite a cidade: ");
    scanf("%s", cidade01);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao01);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosTuristicos01);
    printf("Digite a area (km²): ");
    scanf("%f", &area01);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB01);

   
    printf("\nDigite o nome da carta 2: ");
    scanf("%s", carta02);
    printf("Digite o codigo: ");
    scanf("%s", codigo02);
    printf("Digite o estado: ");
    scanf("%s", estado02);
    printf("Digite a cidade: ");
    scanf("%s", cidade02);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao02);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosTuristicos02);
    printf("Digite a area (km²): ");
    scanf("%f", &area02);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &PIB02);

    
    densidade01 = populacao01 / area01;
    PIBPerCapita01 = (PIB01 * 1000000000.0) / populacao01;
    super_poder01 = (float)populacao01 + area01 + PIB01 + pontosTuristicos01 + PIBPerCapita01 + (1.0f / densidade01);

    densidade02 = populacao02 / area02;
    PIBPerCapita02 = (PIB02 * 1000000000.0) / populacao02;
    super_poder02 = (float)populacao02 + area02 + PIB02 + pontosTuristicos02 + PIBPerCapita02 + (1.0f / densidade02);

   
    printf("CARTA 1\n");
    printf("Populacao: %lu\n", populacao01);
    printf("Pontos Turisticos: %d\n", pontosTuristicos01);
    printf("Area: %.2f km²\n", area01);
    printf("PIB: %.2f B$\n", PIB01);
    printf("Densidade: %.2f hab/km²\n", densidade01);
    printf("PIB per capita: R$ %.2f\n", PIBPerCapita01);
    printf("Super Poder: %.2f\n", super_poder01);

    printf("CARTA 2\n");
    printf("Populacao: %lu\n", populacao02);
    printf("Pontos Turisticos: %d\n", pontosTuristicos02);
    printf("Area: %.2f km²\n", area02);
    printf("PIB: %.2f B$\n", PIB02);
    printf("Densidade: %.2f hab/km²\n", densidade02);
    printf("PIB per capita: R$ %.2f\n", PIBPerCapita02);
    printf("Super Poder: %.2f\n", super_poder02);


    printf(" COMPARAÇÃO DE CARTAS\n");

    printf("Populacao: Carta 1 venceu? %d\n", populacao01 > populacao02);
    printf("Area: Carta 1 venceu? %d\n", area01 > area02);
    printf("PIB: Carta 1 venceu? %d\n", PIB01 > PIB02);
    printf("Pontos Turisticos: Carta 1 venceu? %d\n", pontosTuristicos01 > pontosTuristicos02);
    printf("Densidade: Carta 1 venceu? %d\n", densidade01 < densidade02); // menor vence
    printf("PIB per capita: Carta 1 venceu? %d\n", PIBPerCapita01 > PIBPerCapita02);
    printf("Super Poder: Carta 1 venceu? %d\n", super_poder01 > super_poder02);

    return 0;
}







