#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char estado[3], estado1[3];
    char codigo[4], codigo1[4];// Array de caracteres para armazenar o c�digo (ex: "A01" + '\0')
    char nomecidade[50], nomecidade1[50];// Array de caracteres para armazenar o nome da cidade
    int populacao, populacao1;
    float area, area1;
    float PIB, PIB1;
    int pontosturisticos, pontosturisticos1;

    printf("Bem vindo ao Super Trunfo!\n");
    printf("=============================\n");
    printf("Cadastre suas cartas:\n\n");

    printf("Carta numero 1\n");

    //Estado
    printf("Digite a sigla do Estado (ex: MA, PA, SP): ");
    scanf("%2s", estado);

    //Codigo da carta
    printf("Digite o c�digo da carta (ex: A01, B04): ");
    scanf("%3s", codigo);// "%3s" limita a entrada a 4 caracteres (evita estouro)

    //limpa Limpar buffer do teclado antes de usar `fgets`
    getchar();

    //Nome da cidade 
    printf("Digite o nome da cidade: ");
    fgets(nomecidade, sizeof(nomecidade), stdin);
    nomecidade[strcspn(nomecidade, "\n")] = 0; // Removendo o '\n' do final

    //Popula��o
    printf("Digite a popula��o: ");
    scanf("%d", &populacao);

    //�rea
    printf("Digite a �rea da cidade(em km�): ");
    scanf("%f", &area);

    //PIB
    printf("Digite o PIB da cidade(em bilh�es de reais): ");
    scanf("%f", &PIB);

    //Pontos turisticos
    printf("Digite o n�mero de pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    float densidade = (float)(populacao / area);
    float pibpercapita = (float)(PIB / populacao);

    //Exibir dados:
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %2s\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("popula��o: %d habitantes\n", populacao);
    printf("�rea: %.2f km�\n", area);
    printf("PIB: %.2f Bilh�es de reais\n", PIB);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f Hab/Km�\n", densidade);
    printf("PIB per Capita: %.2f reias\n", pibpercapita);

    //Inserir a segunda carta
    printf("===================================\n");
    printf("Cadastre sua segunda carta:\n\n");

    printf("Carta numero 2\n");

    //Estado
    printf("Digite a sigla do Estado (ex: MA, PA, SP): ");
    scanf("%2s", estado1);

    //Codigo da carta
    printf("Digite o c�digo da carta (ex: A01, B04): ");
    scanf("%3s", codigo1);// "%3s" limita a entrada a 4 caracteres (evita estouro)

    //limpa Limpar buffer do teclado antes de usar `fgets`
    getchar();

    //Nome da cidade 
    printf("Digite o nome da cidade: ");
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    nomecidade1[strcspn(nomecidade1, "\n")] = 0; // Removendo o '\n' do final

    //Popula��o
    printf("Digite a popula��o: ");
    scanf("%d", &populacao1);

    //�rea
    printf("Digite a �rea da cidade(em km�): ");
    scanf("%f", &area1);

    //PIB
    printf("Digite o PIB da cidade(em bilh�es de reais): ");
    scanf("%f", &PIB1);

    //Pontos turisticos
    printf("Digite o n�mero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);
    
    float densidade1 = (float)(populacao1 / area1);
    float pibpercapita1 = (float)(PIB1 / populacao1);

    //Exibir dados:
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("popula��o: %d habitantes\n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: %.2f Bilh�es de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f Hab/Km�\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

  // densidade = popul��o/area
  // PIB percapita = PIB/popula��o
  return 0;
}