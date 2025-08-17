#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int escolhaPais, escolhaCategorias;  
    int valorBrasil = 0, valorEUA = 0;  

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
    printf("5 - Densidade demográfica\n");
    printf("Digite o número da categoria desejada: ");
    scanf("%d", &escolhaCategorias);

    // CARTA BRASIL
    int pibBrasil = 1800;
    int areaBrasil = 8516000;
    int pontosTuristicosBrasil = 200;
    int populacaoBrasil = 213000000;
    int densidadeDemograficaBrasil = 25;

    // CARTA ESTADOS UNIDOS
    int pibEUA = 21000;
    int areaEUA = 9834000;
    int pontosTuristicosEUA = 400;
    int populacaoEUA = 331000000;
    int densidadeDemograficaEUA = 36;   

    
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
            printf("\nVocê escolheu Densidade demográfica!\n");
            valorBrasil = densidadeDemograficaBrasil;
            valorEUA = densidadeDemograficaEUA;
            break;
        default:
            printf("\nOpção inválida! Por favor, escolha uma categoria válida.\n");
            return 0;
    }

    
    printf("\nBrasil: %d\n", valorBrasil);
    printf("EUA: %d\n", valorEUA);

    
    if (valorBrasil > valorEUA) {
        printf("\nResultado: Brasil venceu!\n");
    } else if (valorEUA > valorBrasil) {
        printf("\nResultado: Estados Unidos venceu!\n");
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
