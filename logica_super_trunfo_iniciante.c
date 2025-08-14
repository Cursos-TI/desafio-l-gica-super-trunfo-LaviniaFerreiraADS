// Jogo Super Trunfo - Brasil x Estados Unidos

#include <stdio.h>

int main() {

    // CARTA BRASIL
    int pibBrasil = 1800;
    int areaBrasil = 8516000;
    int pontosTuristicosBrasil = 200;

    // CARTA ESTADOS UNIDOS
    int pibEUA = 21000;
    int areaEUA = 9834000;
    int pontosTuristicosEUA = 400;

    int escolha;

    printf("1 - PIB\n");
    printf("2 - Área\n");
    printf("3 - Pontos turísticos\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("PIB Brasil: %d\n", pibBrasil);
        printf("PIB EUA: %d\n", pibEUA);
        if (pibBrasil > pibEUA)
            printf("Brasil venceu!\n");
        else if (pibBrasil < pibEUA)
            printf("EUA venceu!\n");
        else
            printf("Empate\n");
    }
    else if (escolha == 2) {
        printf("Área Brasil: %d\n", areaBrasil);
        printf("Área EUA: %d\n", areaEUA);
        if (areaBrasil > areaEUA)
            printf("Brasil venceu!\n");
        else if (areaBrasil < areaEUA)
            printf("EUA venceu!\n");
        else
            printf("Empate\n");
    }
    else if (escolha == 3) {
        printf("Pontos turísticos Brasil: %d\n", pontosTuristicosBrasil);
        printf("Pontos turísticos EUA: %d\n", pontosTuristicosEUA);
        if (pontosTuristicosBrasil > pontosTuristicosEUA)
            printf("Brasil venceu!\n");
        else if (pontosTuristicosBrasil < pontosTuristicosEUA)
            printf("EUA venceu!\n");
        else
            printf("Empate\n");
    }
    else {
        printf("Escolha inválida!\n");
    }

    return 0;
}