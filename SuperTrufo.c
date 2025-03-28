#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char estado, estado1;
    char codigo[5], codigo1[5];// Array de caracteres para armazenar o c�digo (ex: "A01" + '\0')
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
    printf("Digite a primeira letra do Estado (A-H): ");
    scanf(" %c", &estado);

    //Codigo da carta
    printf("Digite o c�digo da carta (ex: A01, B04): ");
    scanf("%4s", codigo);// "%4s" limita a entrada a 4 caracteres (evita estouro)

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

    //Exibir dados:
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("popula��o: %d habitantes\n", populacao);
    printf("�rea: %.2f km�\n", area);
    printf("PIB: %.2f Bilh�es de reais\n", PIB);
    printf("Pontos Turisticos: %d\n", pontosturisticos);


    //Inserir a segunda carta
    printf("===================================\n");
    printf("Cadastre sua segunda carta:\n\n");

    printf("Carta numero 2\n");

    //Estado
    printf("Digite a primeira letra do Estado (A-H): ");
    scanf(" %c", &estado1);

    //Codigo da carta
    printf("Digite o c�digo da carta (ex: A01, B04): ");
    scanf("%4s", codigo1);// "%4s" limita a entrada a 4 caracteres (evita estouro)

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

    //Exibir dados:
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("popula��o: %d habitantes\n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: %.2f Bilh�es de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

  return 0;
}