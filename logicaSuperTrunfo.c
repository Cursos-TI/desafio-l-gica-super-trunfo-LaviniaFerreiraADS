
 #include <stdio.h>
 int main(){

    //CARTA BRASIL

    int pibBrasil = 1800;  // 
    int areaBrasil = 8516000;
    int PontosturisticosBrasil = 200;

    // CARTA ESTADOS UNIDOS

    int pibEUA = 21000;
    int areaEUA = 9834000;
    int PontosturisticosEUA = 400;

        int escolha;

        printf("1 - pib\n");
        printf("2 - area\n");
        printf("3 - Pontos turisticos\n");
        scanf("%d", &escolha);
    
    if (escolha == 1){
        printf("PIB Brasil: %d\n", pibBrasil);
        printf("PIB EUA: %d\n", pibEUA);
    if (pibBrasil > pibEUA)
        printf("Brasil venceu!\n");
    }
    else if ("pibBrasil < pibEUA") {
        printf("EUA venceu!\n");
        }
    else 
    {
        printf("Empate\n");
    }

 }