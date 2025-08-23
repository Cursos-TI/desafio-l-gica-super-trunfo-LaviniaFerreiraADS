#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int escolhaPais, escolhaCategorias;  
    float valorBrasil, valorEUA;  

    printf("### Bem-vindo ao jogo Super Trunfo: Brasil vs Estados Unidos! ###\n");
    printf("Escolha o país que você quer jogar:\n");
    printf("1 - Brasil\n");
    printf("2 - Estados Unidos\n");
    printf("Digite o número do país desejado: ");
    scanf("%d", &escolhaPais);

    // Escolha de categorias
    printf("\nEscolha uma categoria para comparar as cartas:\n");
    printf("1 - PIB\n");
    printf("2 - Área\n");
    printf("3 - Pontos turísticos\n");
    printf("4 - População\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite o número da categoria desejada: ");
    scanf("%d", &escolhaCategorias);

    // CARTA BRASIL
    float pibBrasil = 1800.0;               
    float areaBrasil = 8516000.0;           
    int pontosTuristicosBrasil = 200;
    float populacaoBrasil = 213000000.0;    

    
    float densidadePopulacionalBrasil = populacaoBrasil / areaBrasil;
    float pibPerCapitaBrasil = (pibBrasil * 1000000000) / populacaoBrasil; 

    // CARTA ESTADOS UNIDOS
    float pibEUA = 21000.0;                 
    float areaEUA = 9834000.0;             
    int pontosTuristicosEUA = 400;
    float populacaoEUA = 331000000.0;       

    
    float densidadePopulacionalEUA = populacaoEUA / areaEUA;
    float pibPerCapitaEUA = (pibEUA * 1000000000) / populacaoEUA;

    
    switch (escolhaCategorias) {
        case 1:
            printf("\nVocê escolheu PIB!\n");
            valorBrasil = pibBrasil;
            valorEUA = pibEUA;
            break;
        case 2:
            printf("\nVocê escolheu Área!\n");
            valorBrasil = areaBrasil;
            valorEUA = areaEUA;
            break;
        case 3:
            printf("\nVocê escolheu Pontos turísticos!\n");
            valorBrasil = pontosTuristicosBrasil;
            valorEUA = pontosTuristicosEUA;
            break;
        case 4:
            printf("\nVocê escolheu População!\n");
            valorBrasil = populacaoBrasil;
            valorEUA = populacaoEUA;
            break;
        case 5:
            printf("\nVocê escolheu Densidade populacional!\n");
            valorBrasil = densidadePopulacionalBrasil;
            valorEUA = densidadePopulacionalEUA;
            break;
        case 6:
            printf("\nVocê escolheu PIB per capita!\n");
            valorBrasil = pibPerCapitaBrasil;
            valorEUA = pibPerCapitaEUA;
            break;
        default:
            printf("\nOpção inválida! Por favor, escolha uma categoria válida.\n");
            return 0;
    }

    
    printf("\nBrasil: %.2f\n", valorBrasil);
    printf("EUA: %.2f\n", valorEUA);

    
    if (valorBrasil > valorEUA) {
        printf("\nResultado: Brasil venceu!\n");
    } else if (valorEUA > valorBrasil) {
        printf("\nResultado: Estados Unidos venceu!\n");
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
