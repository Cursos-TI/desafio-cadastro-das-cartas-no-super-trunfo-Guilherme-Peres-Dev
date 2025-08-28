#include <stdio.h>

int main(){
    char estado1, estado2;
    char cod1[30], cod2[30];
    char cidade1[30], cidade2[30];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float densidadepopulacao1, densidadepopulacao2;
    float pibpercapita1, pibpercapita2;


    //comeco 1
    printf("cadastre a carta 1:\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo do estado: ");
    scanf("%s", cod1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);
    
    printf("Digite a populacao da cidade: ");
    scanf("%d", &pop1);

    printf("Digite a area: ");
    scanf("%f", &area1);
    densidadepopulacao1 = pop1 / area1;

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    pibpercapita1 = pib1 / pop1;

    printf("Quantos pontos turisticos: ");
    scanf("%d", &turisticos1);

    printf("-------CARTA 1 CADASTRADA--------\n");
    printf("---------------------------------\n");
    //fim 1




    //começo 2
    printf("Cadastre a carta 2:\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo do estado: ");
    scanf("%s", cod2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &pop2);

    printf("Digite a area: ");
    scanf("%f", &area2);
    densidadepopulacao2 = pop2 / area2;

    printf("Digite o pib: ");
    scanf("%f", &pib2);
    pibpercapita2 = pib2 / pop2;

    printf("Quantos pontos turisticos: ");
    scanf("%d", &turisticos2);
   
    printf("-------CARTA 2 CADASTRADA--------\n");
    printf("---------------------------------\n");
    //fim 2


    printf("######################-\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f reais\n", pib1);
    printf("Pontos turisticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacao1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("######################-\n");
    printf("---------------\n");

    printf("######################-\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f reais\n", pib2);
    printf("Pontos turisticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacao2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("######################-\n");

}

/*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
    %d: Imprime um numero inteiro no formato decimal
    %i: equivalente a %d
    %f: imprime um número de ponto flutuante no formato padrão
    %e: Imprime um numero de ponto flutuante no formato cientifico
    %c: imprime um unico caractere
    %s: imprime uma cadeia (string) de caracteres    
*/






