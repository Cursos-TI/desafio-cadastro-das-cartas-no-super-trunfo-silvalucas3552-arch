#include <stdio.h>


     int popu1, pontosT1;
     float area1,pib1;
     float area2, pib2;
     int pontosT2, popu2;

int main() {
    printf("===carta1===\n");
     printf("digite a populaçao da carta1: ");
     scanf ("%d", &popu1);
     
     printf("digite a area da carta1:");
     scanf("%f", &area1);
      
     printf("digite o pib da carta1:");
     scanf("%f", &pib1);
     printf("digite o numero de pontosT");
     scanf("%d", &pontosT1);

     printf ("digite a populçao da carta2: ");
     scanf("%d", &popu2);
     
     printf("digite a area da carta2:");
     scanf("%f", &area2);

     printf("digite o pib da carta2: ");
     scanf("%f", &pib2);

     printf("digite os pontost da carta2: ");
     scanf("%d",&pontosT2);
      
     input("\n codigo da carta1:");
     input("nome da cidade:");
     int (input(popu1));
     float(area1);
     float (pib1);
      
     densidade:popu1/area1;
     pib:pib1/popu1;

     input("\n codigo da carta2:");
     input("nome da cidade:");
     int (input(popu2));
     float(area2);
     float (pib2);

     densidade2: popu2/area2;
     pib:pib2/popu2;

        Carta c1, c2;
        
         printf("Digite o nome do país (Carta 1): ");
    scanf(" %[^\n]", &c1.nome);
    printf("População: ");
    scanf("%lu", &c1.popu1);
    printf("Área: ");
    scanf("%f", &c1.area1);
    printf("PIB: ");
    scanf("%f", &c1.pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &c1.pontosT1);

        printf("Digite o nome do país (Carta 2): ");
    scanf(" %[^\n]", c2.nome2);
    printf("Popu2: ");
    scanf("%lu", &c2.popu2);
    printf("Área: ");
    scanf("%f", &c1.area2);
    printf("PIB: ");
    scanf("%f", &c1.pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &c1.pontosT2);

        c1.densidade = calcularDensidade(c1.popu1, c1.area1);
    c2.densidade = calcularDensidade(c2.popu2, c2.area2);


    c1.superPoder = calcularSuperPoder(c1);
    c2.superPoder = calcularSuperPoder(c2);

    printf("\n===== Comparação =====\n");
    printf("População: %d\n", (c1.popu1 > c2.popu2));
    printf("Área: %d\n", (c1.area1 > c2.area2));
    printf("PIB: %d\n", (c1.pib1 > c2.pib2));
    printf("Pontos Turísticos: %d\n", (c1.pontosT1 > c2.pontosT2));
    printf("Densidade: %d\n", (c1.densidade < c2.densidade)); // menor vence
    printf("Super Poder: %d\n", (c1.superPoder > c2.superPoder));

    printf("\n===== Super Poder =====\n");
    printf("%s: %.2f\n", c1.nome1, c1.superPoder);
    printf("%s: %.2f\n", c2.nome2, c2.superPoder);



     

    return 0;
}
