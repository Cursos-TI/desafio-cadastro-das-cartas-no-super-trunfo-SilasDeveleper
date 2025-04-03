#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");

    char estado[3], estado1[3];
    char codigo[4], codigo1[4];// Array de caracteres para armazenar o código (ex: "A01" + '\0')
    char nomecidade[50], nomecidade1[50];// Array de caracteres para armazenar o nome da cidade
    unsigned long populacao, populacao1;
    float area, area1;
    float  PIB, PIB1;
    int pontosturisticos, pontosturisticos1;

    printf("Bem vindo ao Super Trunfo!\n");
    printf("=============================\n");
    printf("Cadastre suas cartas:\n\n");

    printf("Carta numero 1\n");

    //Estado
    printf("Digite a sigla do Estado (ex: MA, PA, SP): ");
    scanf("%2s", estado);

    //Codigo da carta
    printf("Digite o código da carta (ex: A01, B04): ");
    scanf("%3s", codigo);// "%3s" limita a entrada a 4 caracteres (evita estouro)

    //limpa Limpar buffer do teclado antes de usar `fgets`
    getchar();

    //Nome da cidade 
    printf("Digite o nome da cidade: ");
    fgets(nomecidade, sizeof(nomecidade), stdin);
    nomecidade[strcspn(nomecidade, "\n")] = 0; // Removendo o '\n' do final

    //População
    printf("Digite a população: ");
    scanf("%lu", &populacao);

    //Área
    printf("Digite a Área da cidade(em km²): ");
    scanf("%f", &area);

    //PIB
    printf("Digite o PIB da cidade(em Bilhões de reais): ");
    scanf("%f", &PIB);

    //Pontos turisticos
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontosturisticos);

    float densidade = (area > 0) ? (float)populacao / area : 0;
    float inversodensidade = (densidade > 0) ? 1 / densidade : 0;
    float pibpercapita = (populacao > 0) ? PIB /(float)populacao : 0;

    float SuperPoder = (float)populacao + area + PIB + (float)pontosturisticos + pibpercapita + inversodensidade;

    //Exibir dados:
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %2s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("população: %lu habitantes\n", populacao);
    printf("Área: %.f km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f Hab/Km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);
    printf("O super poder é: %.2f\n", SuperPoder);




    //Inserir a segunda carta
    printf("===================================\n");
    printf("Cadastre sua segunda carta:\n\n");

    printf("Carta numero 2\n");

    //Estado
    printf("Digite a sigla do Estado (ex: MA, PA, SP): ");
    scanf("%2s", estado1);

    //Codigo da carta
    printf("Digite o código da carta (ex: A01, B04): ");
    scanf("%3s", codigo1);// "%3s" limita a entrada a 4 caracteres (evita estouro)

    //limpa Limpar buffer do teclado antes de usar `fgets`
    getchar();

    //Nome da cidade 
    printf("Digite o nome da cidade: ");
    fgets(nomecidade1, sizeof(nomecidade1), stdin);
    nomecidade1[strcspn(nomecidade1, "\n")] = 0; // Removendo o '\n' do final

    //População
    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    //Área
    printf("Digite a Área da cidade(em km²): ");
    scanf("%f", &area1);

    //PIB
    printf("Digite o PIB da cidade(em Bilhões de reais): ");
    scanf("%f", &PIB1);

    //Pontos turisticos
    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);
    
    // definindo as variaveis usado < ou > 
    float densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    float inversodensidade1 = (densidade1 > 0) ? 1 / densidade1 : 0;
    float pibpercapita1 = (populacao1 > 0) ? PIB1 /(float)populacao1 : 0;

    //definindo o Super Poder das cartas fazendo a soma das variaveis numericas
    float SuperPoder1 = (float)populacao1 + area1 + PIB1 + (float)pontosturisticos1 + pibpercapita1 + inversodensidade1;


    //Exibir dados:
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %2s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("população: %lu habitantes\n", populacao1);
    printf("Área: %.f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f Hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("O super poder é: %.2f\n", SuperPoder1);

   int escolha, escolha2;

   printf("Escolha um atributo para comparação:\n");
   printf("1. Populção\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Pontos Turísticos\n");
   printf("5. Densidade Populacional\n");
   printf("6. Super Poder\n");
   printf("Escolha de 1 a 6: ");
   scanf("%d", &escolha);

/* // isso é uma melhora que irei fazer!
   printf("Escolha um segundo atributo para comparação:\n");
   printf("1. Populção\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Pontos Turísticos\n");
   printf("5. Densidade Populacional\n");
   printf("6. Super Poder\n");
   printf("Escolha um segundo atributo ( não pode ser atributos iguais!): ");
   scanf("%d", &escolha2);


   if ((escolha < 1 || escolha > 6) || (escolha2 < 1 || escolha2 > 6)){
    printf("Número invalido, digite apenas números de 1 a 6!")
   }else
   {
    switch (escolha){
   case 1:
    if (escolha2 == escolha)
    {printf("Escolha atributos diferentes!");} 
    
    else if(escolha2 == 2){

    }
    
    break;
  
   default:
    break;}
  }*/


    switch (escolha){
        case 1:
          printf("Escolha o segundo atributo para comparação:\n");
          printf("2. Área\n");
          printf("3. PIB\n");
          printf("4. Pontos Turísticos\n");
          printf("5. Densidade Populacional\n");
          printf("6. Super Poder\n");
          printf("Escolha um novo atributo: ");
          scanf("%d", &escolha2);

          printf("\n======Primeira Comparação======\n");
         printf("Carta 1 - %s (%s): %lu\n", nomecidade, estado, populacao);
         printf("Carta 2 - %s (%s): %lu\n", nomecidade1, estado1, populacao1);

         if(populacao > populacao1){
         printf("Carta 1 (%s) venceu em população!(%lu)\n", nomecidade, populacao);} 

         else if(populacao < populacao1){
         printf("Carta 2 (%s) venceu em população!(%lu)\n", nomecidade1, populacao1);}
         
         else{
         printf("\n====Empate!====\n");}
         printf("\n======Segunda Comparação======\n");

        switch (escolha2){

        case 2:
         printf("Carta 1 - %s (%s): %f\n", nomecidade, estado, area);
         printf("Carta 2 - %s (%s): %f\n", nomecidade1, estado1, area1);

         if(area > area1){
         printf("Carta 1 (%s) venceu em área!(%f)\n", nomecidade, area);} 

         else if(area < area1){
         printf("Carta 2 (%s) venceu em área!(%f)\n", nomecidade1, area1);}
         
         else{
         printf("\n====Empate!====\n");}
        break;

        case 3:
         printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, PIB);
         printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, PIB1);

         if(PIB > PIB1){
         printf("Carta 1 (%s) venceu!(%.2f)\n", nomecidade, PIB);} 

         else if(PIB < PIB1){
         printf("Carta 2 (%s) venceu!(%.2f)\n", nomecidade1,PIB1);}

         else{
         printf("\n====Empate!====\n");} 
        break;

        case 4:
         printf("Carta 1 - %s (%s): %d\n", nomecidade, estado, pontosturisticos);
         printf("Carta 2 - %s (%s): %d\n", nomecidade1, estado1, pontosturisticos1);

         if(pontosturisticos > pontosturisticos1){
         printf("Carta 1 (%s) venceu em Turismo!(%d)\n", nomecidade,pontosturisticos);} 

         else if(pontosturisticos < pontosturisticos1){
         printf("Carta 2 (%s) venceu em Turismo!(%d)\n", nomecidade1, pontosturisticos1);}

         else{
         printf("\n====Empate!====\n");} 

        break;

        case 5:
          printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, densidade);
          printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, densidade1);

         if(densidade < densidade1){
          printf("Carta 1 (%s) venceu em densidade(%.2f)\n", nomecidade, densidade);} 

         else if(densidade > densidade1){
          printf("Carta 2 (%s) venceu em densidade!(%.2f)\n", nomecidade1, densidade1);}

         else{
          printf("\n====Empate!====\n");} 

        break;

        case 6:
          printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, SuperPoder);
          printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, SuperPoder1);

         if(SuperPoder > SuperPoder1){
          printf("Carta 1 (%s) venceu em Super Poder!(%.2f)\n", nomecidade, SuperPoder);} 

         else if(SuperPoder < SuperPoder1){
          printf("Carta 2 (%s) venceu em Super Poder!(%.2f)\n", nomecidade1, SuperPoder1);}

         else{
          printf("\n====Empate!====\n");} 
 
         break;      
         default:
         printf("Número invalido!");
         break;
        }
      }
      
      switch(escolha){
        case 2:
         printf("Escolha o segundo atributo para comparação:\n");
         printf("1. Populção\n");
         printf("3. PIB\n");
         printf("4. Pontos Turísticos\n");
         printf("5. Densidade Populacional\n");
         printf("6. Super Poder\n");
         printf("Escolha mais um atributo: ");
         scanf("%d", &escolha2);
        
         printf("Carta 1 - %s (%s): %f\n", nomecidade, estado, area);
         printf("Carta 2 - %s (%s): %f\n", nomecidade1, estado1, area1);

         if(area > area1){
         printf("Carta 1 (%s) venceu em área!(%f)\n", nomecidade, area);} 

         else if(area < area1){
         printf("Carta 2 (%s) venceu em área!(%f)\n", nomecidade1, area1);}
         
         else{
         printf("\n====Empate!====\n");}
        break; 

         switch (escolha2){
        case 1:
        printf("Carta 1 - %s (%s): %lu\n", nomecidade, estado, populacao);
        printf("Carta 2 - %s (%s): %lu\n", nomecidade1, estado1, populacao1);

        if(populacao > populacao1){
        printf("Carta 1 (%s) venceu em população!(%lu)\n", nomecidade, populacao);} 

        else if(populacao < populacao1){
        printf("Carta 2 (%s) venceu em população!(%lu)\n", nomecidade1, populacao1);}
        
        else{
        printf("\n====Empate!====\n");}
        printf("\n======Segunda Comparação======\n");
        break;
      
        case 3:
         printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, PIB);
         printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, PIB1);

         if(PIB > PIB1){
         printf("Carta 1 (%s) venceu!(%.2f)\n", nomecidade, PIB);} 

         else if(PIB < PIB1){
         printf("Carta 2 (%s) venceu!(%.2f)\n", nomecidade1,PIB1);}

         else{
         printf("\n====Empate!====\n");} 
        break;

        case 4:
         printf("Carta 1 - %s (%s): %d\n", nomecidade, estado, pontosturisticos);
         printf("Carta 2 - %s (%s): %d\n", nomecidade1, estado1, pontosturisticos1);

         if(pontosturisticos > pontosturisticos1){
         printf("Carta 1 (%s) venceu em Turismo!(%d)\n", nomecidade,pontosturisticos);} 

         else if(pontosturisticos < pontosturisticos1){
         printf("Carta 2 (%s) venceu em Turismo!(%d)\n", nomecidade1, pontosturisticos1);}

         else{
         printf("\n====Empate!====\n");} 

        break;

        case 5:
          printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, densidade);
          printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, densidade1);

         if(densidade < densidade1){
          printf("Carta 1 (%s) venceu em densidade(%.2f)\n", nomecidade, densidade);} 

         else if(densidade > densidade1){
          printf("Carta 2 (%s) venceu em densidade!(%.2f)\n", nomecidade1, densidade1);}

         else{
          printf("\n====Empate!====\n");} 

        break;

        case 6:
          printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, SuperPoder);
          printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, SuperPoder1);

         if(SuperPoder > SuperPoder1){
          printf("Carta 1 (%s) venceu em Super Poder!(%.2f)\n", nomecidade, SuperPoder);} 

         else if(SuperPoder < SuperPoder1){
          printf("Carta 2 (%s) venceu em Super Poder!(%.2f)\n", nomecidade1, SuperPoder1);}

         else{
          printf("\n====Empate!====\n");} 
 
         break;       
         default:
         printf("Número invalido!");
         break;
         }
        }





        switch(escolha){
        case 3:
         printf("Escolha o segundo atributo para comparação:\n");
         printf("1. Populção\n");
         printf("2. Área\n");
         printf("4. Pontos Turísticos\n");
         printf("5. Densidade Populacional\n");
         printf("6. Super Poder\n");
         printf("Escolha um novo atributo: ");
         scanf("%d", &escolha);

         printf("\n======Primeira Comparação======\n");
         printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, PIB);
         printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, PIB1);

         if(PIB > PIB1){
         printf("Carta 1 (%s) venceu!(%.2f)\n", nomecidade, PIB);} 

         else if(PIB < PIB1){
         printf("Carta 2 (%s) venceu!(%.2f)\n", nomecidade1,PIB1);}

         else{
         printf("\n====Empate!====\n");} 
        break;

        switch (escolha2)
        {
        case 1:
        printf("Carta 1 - %s (%s): %lu\n", nomecidade, estado, populacao);
        printf("Carta 2 - %s (%s): %lu\n", nomecidade1, estado1, populacao1);

        if(populacao > populacao1){
        printf("Carta 1 (%s) venceu em população!(%lu)\n", nomecidade, populacao);} 

        else if(populacao < populacao1){
        printf("Carta 2 (%s) venceu em população!(%lu)\n", nomecidade1, populacao1);}
        
        else{
        printf("\n====Empate!====\n");}
        printf("\n======Segunda Comparação======\n");
        break;

        case 2:
        printf("Carta 1 - %s (%s): %f\n", nomecidade, estado, area);
        printf("Carta 2 - %s (%s): %f\n", nomecidade1, estado1, area1);

        if(area > area1){
        printf("Carta 1 (%s) venceu em área!(%f)\n", nomecidade, area);} 

        else if(area < area1){
        printf("Carta 2 (%s) venceu em área!(%f)\n", nomecidade1, area1);}
        
        else{
        printf("\n====Empate!====\n");}
        break;

        case 4:
         printf("Carta 1 - %s (%s): %d\n", nomecidade, estado, pontosturisticos);
         printf("Carta 2 - %s (%s): %d\n", nomecidade1, estado1, pontosturisticos1);

         if(pontosturisticos > pontosturisticos1){
         printf("Carta 1 (%s) venceu em Turismo!(%d)\n", nomecidade,pontosturisticos);} 

         else if(pontosturisticos < pontosturisticos1){
         printf("Carta 2 (%s) venceu em Turismo!(%d)\n", nomecidade1, pontosturisticos1);}

         else{
         printf("\n====Empate!====\n");} 

        break;

        case 5:
          printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, densidade);
          printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, densidade1);

         if(densidade < densidade1){
          printf("Carta 1 (%s) venceu em densidade(%.2f)\n", nomecidade, densidade);} 

         else if(densidade > densidade1){
          printf("Carta 2 (%s) venceu em densidade!(%.2f)\n", nomecidade1, densidade1);}

         else{
          printf("\n====Empate!====\n");} 

        break;

        case 6:
          printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, SuperPoder);
          printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, SuperPoder1);

         if(SuperPoder > SuperPoder1){
          printf("Carta 1 (%s) venceu em Super Poder!(%.2f)\n", nomecidade, SuperPoder);} 

         else if(SuperPoder < SuperPoder1){
          printf("Carta 2 (%s) venceu em Super Poder!(%.2f)\n", nomecidade1, SuperPoder1);}

         else{
          printf("\n====Empate!====\n");} 
 
         break;      
         default:
          printf("Número invalido!");
        break;
        }
      }











      switch(escolha){
        case 4:
           printf("Escolha o segundo atributo para comparação:\n");
           printf("1. Populção\n");
           printf("2. Área\n");
           printf("3. PIB\n");
           printf("5. Densidade Populacional\n");
           printf("6. Super Poder\n");
           printf("Escolha um novo atributo: ");
           scanf("%d", &escolha2);

           printf("\n======Primeira Comparação======\n");
           printf("Carta 1 - %s (%s): %d\n", nomecidade, estado, pontosturisticos);
           printf("Carta 2 - %s (%s): %d\n", nomecidade1, estado1, pontosturisticos1);
  
           if(pontosturisticos > pontosturisticos1){
           printf("Carta 1 (%s) venceu em Turismo!(%d)\n", nomecidade,pontosturisticos);} 
  
           else if(pontosturisticos < pontosturisticos1){
           printf("Carta 2 (%s) venceu em Turismo!(%d)\n", nomecidade1, pontosturisticos1);}
  
           else{
           printf("\n====Empate!====\n");} 
          break;

          switch (escolha2)
          {
            case 1:
            printf("Carta 1 - %s (%s): %lu\n", nomecidade, estado, populacao);
            printf("Carta 2 - %s (%s): %lu\n", nomecidade1, estado1, populacao1);
    
            if(populacao > populacao1){
            printf("Carta 1 (%s) venceu em população!(%lu)\n", nomecidade, populacao);} 
    
            else if(populacao < populacao1){
            printf("Carta 2 (%s) venceu em população!(%lu)\n", nomecidade1, populacao1);}
            
            else{
            printf("\n====Empate!====\n");}
            printf("\n======Segunda Comparação======\n");
            break;

          case 2:
          printf("Carta 1 - %s (%s): %f\n", nomecidade, estado, area);
          printf("Carta 2 - %s (%s): %f\n", nomecidade1, estado1, area1);
 
          if(area > area1){
          printf("Carta 1 (%s) venceu em área!(%f)\n", nomecidade, area);} 
 
          else if(area < area1){
          printf("Carta 2 (%s) venceu em área!(%f)\n", nomecidade1, area1);}
          
          else{
          printf("\n====Empate!====\n");}
          break;

          case 3:
          printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, PIB);
          printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, PIB1);
 
          if(PIB > PIB1){
          printf("Carta 1 (%s) venceu!(%.2f)\n", nomecidade, PIB);} 
 
          else if(PIB < PIB1){
          printf("Carta 2 (%s) venceu!(%.2f)\n", nomecidade1,PIB1);}
 
          else{
          printf("\n====Empate!====\n");} 
         break;

        case 5:
         printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, densidade);
         printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, densidade1);

         if(densidade < densidade1){
         printf("Carta 1 (%s) venceu em densidade(%.2f)\n", nomecidade, densidade);} 

         else if(densidade > densidade1){
         printf("Carta 2 (%s) venceu em densidade!(%.2f)\n", nomecidade1, densidade1);}

         else{
         printf("\n====Empate!====\n");} 

        break;
 
        case 6:
          printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, SuperPoder);
          printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, SuperPoder1);

         if(SuperPoder > SuperPoder1){
          printf("Carta 1 (%s) venceu em Super Poder!(%.2f)\n", nomecidade, SuperPoder);} 

         else if(SuperPoder < SuperPoder1){
          printf("Carta 2 (%s) venceu em Super Poder!(%.2f)\n", nomecidade1, SuperPoder1);}

         else{
          printf("\n====Empate!====\n");} 
 
         break;       
           default:
           printf("Número invalido!");
           break;
          }
        }







        switch(escolha){
        case 5:
            printf("Escolha o segundo atributo para comparação:\n");
            printf("1. Populção\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("6. Super Poder\n");
            printf("Escolha um novo atributo: ");
            scanf("%d", &escolha);

            printf("\n======Primeira Comparação======\n");
            printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, densidade);
            printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, densidade1);
   
            if(densidade < densidade1){
            printf("Carta 1 (%s) venceu em densidade(%.2f)\n", nomecidade, densidade);} 
   
            else if(densidade > densidade1){
            printf("Carta 2 (%s) venceu em densidade!(%.2f)\n", nomecidade1, densidade1);}
   
            else{
            printf("\n====Empate!====\n");} 
          break;

          switch (escolha2)
        {
          case 1:
          printf("Carta 1 - %s (%s): %lu\n", nomecidade, estado, populacao);
          printf("Carta 2 - %s (%s): %lu\n", nomecidade1, estado1, populacao1);
  
          if(populacao > populacao1){
          printf("Carta 1 (%s) venceu em população!(%lu)\n", nomecidade, populacao);} 
  
          else if(populacao < populacao1){
          printf("Carta 2 (%s) venceu em população!(%lu)\n", nomecidade1, populacao1);}
          
          else{
          printf("\n====Empate!====\n");}
          printf("\n======Segunda Comparação======\n");
          break;

          case 2:
          printf("Carta 1 - %s (%s): %f\n", nomecidade, estado, area);
          printf("Carta 2 - %s (%s): %f\n", nomecidade1, estado1, area1);
 
          if(area > area1){
          printf("Carta 1 (%s) venceu em área!(%f)\n", nomecidade, area);} 
 
          else if(area < area1){
          printf("Carta 2 (%s) venceu em área!(%f)\n", nomecidade1, area1);}
          
          else{
          printf("\n====Empate!====\n");}
          break;
   
          case 3:
          printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, PIB);
          printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, PIB1);
 
          if(PIB > PIB1){
          printf("Carta 1 (%s) venceu!(%.2f)\n", nomecidade, PIB);} 
 
          else if(PIB < PIB1){
          printf("Carta 2 (%s) venceu!(%.2f)\n", nomecidade1,PIB1);}
 
          else{
          printf("\n====Empate!====\n");} 
         break;
   
         case 4:
         printf("Carta 1 - %s (%s): %d\n", nomecidade, estado, pontosturisticos);
         printf("Carta 2 - %s (%s): %d\n", nomecidade1, estado1, pontosturisticos1);

         if(pontosturisticos > pontosturisticos1){
         printf("Carta 1 (%s) venceu em Turismo!(%d)\n", nomecidade,pontosturisticos);} 

         else if(pontosturisticos < pontosturisticos1){
         printf("Carta 2 (%s) venceu em Turismo!(%d)\n", nomecidade1, pontosturisticos1);}

         else{
         printf("\n====Empate!====\n");} 

        break;
   
        case 6:
          printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, SuperPoder);
          printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, SuperPoder1);

         if(SuperPoder > SuperPoder1){
          printf("Carta 1 (%s) venceu em Super Poder!(%.2f)\n", nomecidade, SuperPoder);} 

         else if(SuperPoder < SuperPoder1){
          printf("Carta 2 (%s) venceu em Super Poder!(%.2f)\n", nomecidade1, SuperPoder1);}

         else{
          printf("\n====Empate!====\n");} 
 
         break;       
            default:
            printf("Número invalido!");
            break;
        }
      }



      switch(escolha){
        case 6:
           printf("Escolha o segundo atributo para comparação:\n");
           printf("1. Populção\n");
           printf("2. Área\n");
           printf("3. PIB\n");
           printf("4. Pontos Turísticos\n");
           printf("5. Densidade Populacional\n");
           printf("Escolha um novo atributo: ");
           scanf("%d", &escolha2);

           printf("\n======Primeira Comparação======\n");
           printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, SuperPoder);
           printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, SuperPoder1);
 
          if(SuperPoder > SuperPoder1){
           printf("Carta 1 (%s) venceu em Super Poder!(%.2f)\n", nomecidade, SuperPoder);} 
 
          else if(SuperPoder < SuperPoder1){
           printf("Carta 2 (%s) venceu em Super Poder!(%.2f)\n", nomecidade1, SuperPoder1);}
 
          else{
           printf("\n====Empate!====\n");} 
          break;

           switch (escolha2)
          {
            case 1:
            printf("Carta 1 - %s (%s): %lu\n", nomecidade, estado, populacao);
            printf("Carta 2 - %s (%s): %lu\n", nomecidade1, estado1, populacao1);
    
            if(populacao > populacao1){
            printf("Carta 1 (%s) venceu em população!(%lu)\n", nomecidade, populacao);} 
    
            else if(populacao < populacao1){
            printf("Carta 2 (%s) venceu em população!(%lu)\n", nomecidade1, populacao1);}
            
            else{
            printf("\n====Empate!====\n");}
            printf("\n======Segunda Comparação======\n");
            break;

            case 2:
            printf("Carta 1 - %s (%s): %f\n", nomecidade, estado, area);
            printf("Carta 2 - %s (%s): %f\n", nomecidade1, estado1, area1);
   
            if(area > area1){
            printf("Carta 1 (%s) venceu em área!(%f)\n", nomecidade, area);} 
   
            else if(area < area1){
            printf("Carta 2 (%s) venceu em área!(%f)\n", nomecidade1, area1);}
            
            else{
            printf("\n====Empate!====\n");}
            break;
 
          case 3:
          printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, PIB);
          printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, PIB1);
 
          if(PIB > PIB1){
          printf("Carta 1 (%s) venceu!(%.2f)\n", nomecidade, PIB);} 
 
          else if(PIB < PIB1){
          printf("Carta 2 (%s) venceu!(%.2f)\n", nomecidade1,PIB1);}
 
          else{
          printf("\n====Empate!====\n");} 
         break;
 
         case 4:
         printf("Carta 1 - %s (%s): %d\n", nomecidade, estado, pontosturisticos);
         printf("Carta 2 - %s (%s): %d\n", nomecidade1, estado1, pontosturisticos1);

         if(pontosturisticos > pontosturisticos1){
         printf("Carta 1 (%s) venceu em Turismo!(%d)\n", nomecidade,pontosturisticos);} 

         else if(pontosturisticos < pontosturisticos1){
         printf("Carta 2 (%s) venceu em Turismo!(%d)\n", nomecidade1, pontosturisticos1);}

         else{
         printf("\n====Empate!====\n");} 

        break;
 
        case 5:
         printf("Carta 1 - %s (%s): %.2f\n", nomecidade, estado, densidade);
         printf("Carta 2 - %s (%s): %.2f\n", nomecidade1, estado1, densidade1);

         if(densidade < densidade1){
         printf("Carta 1 (%s) venceu em densidade(%.2f)\n", nomecidade, densidade);} 

         else if(densidade > densidade1){
         printf("Carta 2 (%s) venceu em densidade!(%.2f)\n", nomecidade1, densidade1);}

         else{
         printf("\n====Empate!====\n");} 

        break;   

           default:
           printf("Número invalido!");
           break;
          }
 
          }
  return 0;
}