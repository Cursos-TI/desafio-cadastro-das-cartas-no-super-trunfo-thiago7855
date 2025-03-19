#include <stdio.h>


int main() {
    
    //carta1    
    char estado1[20];
    char codigo1[20];
    char nomecidade1[20];
    int populacao1;
    float area1;    
    float pib1;
    int pontosturisticos1;

    //carta2

    char estado2[20];
    char codigo2[20];
    char nomecidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    //leitura da carta1

    printf("Digite o estado:\n");
    scanf("%s", estado1);
    printf("Digite o codigo:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade1);
    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);
    printf("Digite a area1:\n");
    scanf("%f", &area1);
    printf("Digite o pib:\n");
    scanf("%f", &pib1);
    printf("Digite os pontos turisticos:\n");
    scanf("%d", &pontosturisticos1);


    //leitura da carta2

    printf("Digite o estado:\n");
        scanf("%s", estado2);
    printf("Digite o codigo:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nomecidade2);   
    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);
    printf("digite a area2:\n");
    scanf("%f", &area2);
    printf("Digite o pib:\n");
    scanf("%f", &pib2);
    printf("Digite os pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);


    return 0;
}
