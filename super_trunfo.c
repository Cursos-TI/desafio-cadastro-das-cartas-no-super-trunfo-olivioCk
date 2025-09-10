#include <stdio.h>

int main(){
   printf("Desafio super trunfo \n");

   char carta01[50], codigo01[50], Estado01[50], cidade01[50];
   int população01;
   int pontosturisticos01;
   float area01;
   float PIB01;

   char carta02[50], codigo02[50], Estado02[50], cidade02[50];
   int população02;
   int pontosturisticos02;
   float area02;
   float PIB02;

   printf("Digite sua carta01: \n");
   scanf("%s", carta01);

   printf("Digite seu codigo: \n");
   scanf("%s", codigo01);

   printf("Digite o Estado: \n");
   scanf("%s", Estado01);

   printf("Digite o nome da sua cidade: \n");
   scanf("%s", cidade01);
   
   printf("Digite a população: \n");
   scanf("%d", &população01);

   printf("Digite pontosturisticos: \n");
   scanf("%d", &pontosturisticos01);

   printf("Digite sua area: \n");
   scanf("%f", &area01);

   printf("Digite seu PIB: \n");
   scanf("%f", &PIB01);

   printf("Digite sua carta02: \n");
   scanf("%s", carta02);

   printf("Digite seu codigo: \n");
   scanf("%s", codigo02);

   printf("Digite o Estado: \n");
   scanf("%s", Estado02);

   printf("Digite o nome da sua cidade: \n");
   scanf("%s", cidade02);
   
   printf("Digite a população: \n");
   scanf("%d", &população02);

   printf("Digite pontosturisticos: \n");
   scanf("%d", &pontosturisticos02);

   printf("Digite sua area: \n");
   scanf("%f", &area02);

   printf("Digite seu PIB: \n");
   scanf("%f", &PIB02);

   printf("carta01: %s\n codigo01: %s\n Estado: %s\n cidade: %s\n", carta01, codigo01, Estado01, cidade01);
   printf("população01: %d\n pontosturisticos01: %d\n", população01, pontosturisticos01);
   printf("area01: %f\n PIB01: %f\n", area01, PIB01);

   printf("carta02: %s\n codigo02: %s\n Estado: %s\n cidade: %s\n", carta02, codigo02, Estado02, cidade02);
   printf("população02: %d\n pontosturisticos: %d\n", população02, pontosturisticos02);
   printf("area02: %f\n PIB02: %f\n", area02, PIB02);

   // Função para cadastrar carta
    cadastrarCarta(carta01);
    printf("Digite o nome da carta (país): ");
    scanf("%s", c->nome);

    printf("Digite o código: ");
    scanf("%s", c->codigo);

    printf("Digite o Estado: ");
    scanf("%s", c->estado);

    printf("Digite o nome da cidade: ");
    scanf("%s", c->cidade);

    printf("Digite a população: ");
    scanf("%d", &c->populacao);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontosTuristicos);

    printf("Digite a área: ");
    scanf("%f", &c->area);

    printf("Digite o PIB: ");
    scanf("%f", &c->PIB);

    // ***calcula densidade demográfica***
    c->densidade = (float)c->populacao / c->area;
}

// ***comparação***
void compararCartas(carta01, Carta02, int opcao) {
    switch(opcao) {
        case 1: // ***População***
            printf("\nComparando População:\n");
            printf("%s: %d x %s: %d\n", c1.nome, c1.populacao, c2.nome, c2.populacao);
            if(c1.populacao > c2.populacao)
                printf("Vencedor: %s\n", c1.nome);
            else if(c2.populacao > c1.populacao)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 2: // ***Área***
            printf("\nComparando Área:\n");
            printf("%s: %.2f x %s: %.2f\n", c1.nome, c1.area, c2.nome, c2.area);
            if(c1.area > c2.area)
                printf("Vencedor: %s\n", c1.nome);
            else if(c2.area > c1.area)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 3: // ***PIB***
            printf("\nComparando PIB:\n");
            printf("%s: %.2f x %s: %.2f\n", c1.nome, c1.PIB, c2.nome, c2.PIB);
            if(c1.PIB > c2.PIB)
                printf("Vencedor: %s\n", c1.nome);
            else if(c2.PIB > c1.PIB)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 4: // ***Pontos Turísticos***
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d x %s: %d\n", c1.nome, c1.pontosTuristicos, c2.nome, c2.pontosTuristicos);
            if(c1.pontosTuristicos > c2.pontosTuristicos)
                printf("Vencedor: %s\n", c1.nome);
            else if(c2.pontosTuristicos > c1.pontosTuristicos)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 5: // ***Densidade Demográfica*** ##(MENOR valor vence)##
            printf("\nComparando Densidade Demográfica:\n");
            printf("%s: %.2f x %s: %.2f\n", c1.nome, c1.densidade, c2.nome, c2.densidade);
            if(c1.densidade < c2.densidade)
                printf("Vencedor: %s\n", c1.nome);
            else if(c2.densidade < c1.densidade)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
}

int main() {
     carta01, carta02;
    int opcao;

    printf("=== Cadastro Carta 01 ===\n");
    cadastrarCarta(&carta01);

    printf("\n=== Cadastro Carta 02 ===\n");
    cadastrarCarta(&carta02);

    printf("\n=== Menu de Comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    compararCartas(carta01, carta02, opcao);



   return 0;








}