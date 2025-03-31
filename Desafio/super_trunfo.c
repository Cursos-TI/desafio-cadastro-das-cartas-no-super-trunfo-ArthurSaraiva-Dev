#include <stdio.h>

int main(){
    // DECLARANDO VARIÁVEIS DAS CARTAS:
    //Primeira Carta:
    char estadoA[50];
    char codigoA[10];
    char nomeA[50];
    int populacaoA;
    float areaA;
    float pibA;
    int pontos_turisticosA;
    
    //Segunda Carta:
    char estadoB[50];
    char codigoB[10];
    char nomeB[50];
    int populacaoB;
    float areaB;
    float pibB;
    int pontos_turisticosB;
    
    printf("Desafio Cartas Super Trunfo!\n");
    
    // Capturando os dados da primeira carta:
    //inserindo o estado:
    printf("Digite o estado da sua primeira carta (ex: A): \n");
    scanf("%s", estadoA);
    
    //inserindo o código:
    printf("Digite o código da cidade (ex:A01): \n");
    scanf("%s", codigoA);
    
    //inserindo o nome:
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeA);
    
    //inserindo a população:
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacaoA);

    //inserindo a área:
    printf("Digite a área da cidade: \n");
    scanf("%f", &areaA);

    //inserindo o PIB:
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibA);

    //inserindo o número de pontos turisticos:
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticosA);

    
    
    // Capturando os dados da segunda carta:
    //inserindo o estado:
    printf("Agora digite o estado da sua segunda carta (ex: B): \n");
    scanf("%s", estadoB);
    
    //inserindo o código:
    printf("Digite o código da cidade (ex:B02): \n");
    scanf("%s", codigoB);
    
    //inserindo o nome:
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeB);
    
    //inserindo a população:
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacaoB);

    //inserindo a área:
    printf("Digite a área da cidade: \n");
    scanf("%f", &areaB);

    //inserindo o PIB:
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibB);

    //inserindo o número de pontos turisticos:
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticosB);

    // Calculando Densidade Populacional e PIB per Capita:
    
    // Primeira Carta:
    float densidadePop1 = populacaoA / areaA;
    float PIBperC1 = pibA / populacaoA;

    // Segunda carta
    float densidadePop2 = populacaoB / areaB;
    float PIBperC2 = pibB / populacaoB;
    
    printf("\nCarta A:\nEstado: %s\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f\nNúmero de pontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f Reais\n", estadoA, codigoA, nomeA, populacaoA, areaA, pibA, pontos_turisticosA, densidadePop1, PIBperC1);
    printf("\nCarta B:\nEstado: %s\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f\nNúmero de pontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f Reais", estadoB, codigoB, nomeB, populacaoB, areaB, pibB, pontos_turisticosB, densidadePop2, PIBperC2);

    return 0;
}