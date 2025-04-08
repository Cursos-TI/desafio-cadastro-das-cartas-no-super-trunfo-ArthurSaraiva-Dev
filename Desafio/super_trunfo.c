#include <stdio.h>

int main(){
    // DECLARANDO VARIÁVEIS DAS CARTAS:
    //Primeira Carta:
    char estadoA[50];
    char codigoA[10];
    char nomeA[50];
    // Para o nível mestre foi trocado para "unsigned long int"
    unsigned long int populacaoA;
    float areaA;
    float pibA;
    int pontos_turisticosA;
    
    //Segunda Carta:
    char estadoB[50];
    char codigoB[10];
    char nomeB[50];
    // Para o nível mestre foi trocado para "unsigned long int"
    unsigned long int populacaoB;
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
    scanf("%lu", &populacaoA);

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
    scanf("%lu", &populacaoB);

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

    // Calculando o super poder:
    // calculo da inversão
    float inversoDensiA = 1 / densidadePop1;
    float inversoDensiB = 1 / densidadePop2;
    
    // calculando propriamente o super poder
    float poderA = populacaoA + areaA + pibA + pontos_turisticosA + inversoDensiA;
    float poderB = populacaoB + areaB + pibB + pontos_turisticosB + inversoDensiB;

    
    printf("\nCarta A:\nEstado: %s\nCódigo: %s\nNome: %s\nPopulação: %lu\nÁrea: %f km²\nPIB: %f\nNúmero de pontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f Reais\nSuper Poder: %f\n", estadoA, codigoA, nomeA, populacaoA, areaA, pibA, pontos_turisticosA, densidadePop1, PIBperC1, poderA);
    printf("\nCarta B:\nEstado: %s\nCódigo: %s\nNome: %s\nPopulação: %lu\nÁrea: %f km²\nPIB: %f\nNúmero de pontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f Reais\nSuper Poder: %f\n", estadoB, codigoB, nomeB, populacaoB, areaB, pibB, pontos_turisticosB, densidadePop2, PIBperC2, poderB);
    

    // Calculando a carta vencedora
    printf("\nComparação das Cartas:\n");
    //exibindo explicação
    printf("A carta vencedora é definida pela melhor sequencia de número 1 (exceto na densidade populacional)\n");

    // Armazenando dados
    int resultPop = populacaoA > populacaoB;
    int resultArea = areaA > areaB;
    int resultPib = pibA > pibB;
    int resultPontTurist = pontos_turisticosA > pontos_turisticosB;
    int resultDensiPop = densidadePop1 < densidadePop2;
    int resultPibPercap = PIBperC1 > PIBperC2;
    int resultPoder = poderA > poderB;

    // Imprimindo o resultado
    printf("População: Carta 1 venceu (%d)\n", resultPop);
    printf("Área: Carta 1 venceu (%d)\n", resultArea);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultPontTurist);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultDensiPop);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultPibPercap);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultPoder);

    // Comparação de um atribulo (desafio novato tema2)
    printf("Comparação das cartas (Atributo: PIB)\n");
    printf("Carta 1- %s (%s): %f\n", nomeA, estadoA, pibA);
    printf("Carta 2- %s (%s): %f\n", nomeB, estadoB, pibB);
    
    if(pibA > pibB){
        printf("Carta 1- %s (%s) venceu!\n", nomeA, estadoA);
    }else {
        printf("Carta 2- %s (%s) venceu!\n", nomeB, estadoB);
    }

    


    return 0;
}