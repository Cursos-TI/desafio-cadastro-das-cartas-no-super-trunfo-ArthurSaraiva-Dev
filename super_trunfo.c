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
    printf("Digite o estado da sua primeira carta: \n");
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
    printf("Agora digite o estado da sua segunda carta: \n");
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
    
    printf("\nCarta A:\nEstado: %s\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de pontos Turísticos: %d\n", estadoA, codigoA, nomeA, populacaoA, areaA, pibA, pontos_turisticosA);
    printf("\nCarta B:\nEstado: %s\nCódigo: %s\nNome: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nNúmero de pontos Turísticos: %d", estadoB, codigoB, nomeB, populacaoB, areaB, pibB, pontos_turisticosB);

    return 0;
}