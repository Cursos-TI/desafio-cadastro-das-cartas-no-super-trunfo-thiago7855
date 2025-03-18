#include <stdio.h>


int main() {
    
    char estado1[20];
    char codigo1[20];
    char nomecidade1[20];
    int populacao1;
    float area1;    
    float pib1;
    int pontosturisticos1;

    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite o codigo: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o pib: ");
    scanf("%f", &pib1);
    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    

    
    return 0;
}
