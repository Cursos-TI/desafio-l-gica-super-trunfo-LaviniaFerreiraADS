#include <stdio.h>
#include <string.h>

int main (){
// DADOS DAS CARTAS

char pais1[] = "Brasil";
char pais2[] = "USA";

int pibBrasil = 1800, areaBrasil = 8516000, densidadeBrasil = 25;
int pibEUA = 21000, areaEUA = 9834000, densidadeEUA = 35;

int escolha1 = 0, escolha2 = 0;
int pontuacaoBrasil = 0;
int pontuacaoUSA = 0;

// MENU PRIMEIRO ATRIBUTO

    printf("\nEscolha o PRIMEIRO ATRIBUTO:\n");
    printf("1 - PIB\n");
    printf("2 - Área\n");
    printf("3 - Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    while (escolha1 < 1 || escolha1 > 3) {
    printf("Escolha inválida! Digite novamente: ");
    scanf("%d", &escolha1);
 
    }
// MENU SEGUNDO ATRIBUTO

    printf("\nEscolha o SEGUNDO ATRIBUTO (DIFERENTE DO PRIMEIRO):\n");
    if (escolha1 != 1) printf("1 - PIB\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - Densidade Demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    while (escolha2 < 1 || escolha2 > 3 || escolha2 == escolha1){

    printf("Escolha inválida! Digite novamente: ");
    scanf("%d", &escolha2);
}

int valor1Carta1 = 0, valor1Carta2 = 0; // Primeiro atributo
int valor2Carta1 = 0, valor2Carta2 = 0; // Segundo atributo
// Primeiro atributo
switch(escolha1) {
    case 1: // PIB
        valor1Carta1 = pibBrasil;
        valor1Carta2 = pibEUA;
        break;
    case 2: // Área
        valor1Carta1 = areaBrasil;
        valor1Carta2 = areaEUA;
        break;
    case 3: // Densidade
        valor1Carta1 = densidadeBrasil;
        valor1Carta2 = densidadeEUA;
        break;
}
// Segundo atributo
switch(escolha2) {
    case 1:
        valor2Carta1 = pibBrasil;
        valor2Carta2 = pibEUA;
        break;
    case 2:
        valor2Carta1 = areaBrasil;
        valor2Carta2 = areaEUA;
        break;
    case 3:
        valor2Carta1 = densidadeBrasil;
        valor2Carta2 = densidadeEUA;
        break;
}
if (escolha1 == 3) {
    // densidade: menor vence
    if (valor1Carta1 < valor1Carta2)
        pontuacaoBrasil++;
    else if (valor1Carta1 > valor1Carta2)
        pontuacaoUSA++;
} else {
    // PIB ou Área: maior vence
    if (valor1Carta1 > valor1Carta2)
        pontuacaoBrasil++;
    else if (valor1Carta1 < valor1Carta2)
        pontuacaoUSA++;
}
if (escolha2 == 3) {
    // densidade: menor vence
    if (valor2Carta1 < valor2Carta2)
        pontuacaoBrasil++;
    else if (valor2Carta1 > valor2Carta2)
        pontuacaoUSA++;
} else {
    // PIB ou Área: maior vence
    if (valor2Carta1 > valor2Carta2)
        pontuacaoBrasil++;
    else if (valor2Carta1 < valor2Carta2)
        pontuacaoUSA++;
}
int somaBrasil = valor1Carta1 + valor2Carta1;
int somaEUA = valor1Carta2 + valor2Carta2;
// RESULTADO DA RODADA
printf("\n=== RESULTADO DA RODADA ===\n");
printf("%s: %d + %d = %d\n", pais1, valor1Carta1, valor2Carta1, somaBrasil);
printf("%s: %d + %d = %d\n", pais2, valor1Carta2, valor2Carta2, somaEUA);

if (somaBrasil > somaEUA) {
    printf("\nVencedor: %s\n", pais1);
} else if (somaBrasil < somaEUA) {
    printf("\nVencedor: %s\n", pais2);
} else {
    printf("\nEmpate!\n");
}



 }