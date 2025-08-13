#include <stdio.h>


    struct Carta{
     int popu;
     float area;
     float pib;
     int pontosT;
    };

    struct Carta carta1,carta2;
int main() {
     printf("digite a populaçao da carta1: ");
     scanf ("%d", &carta1.popu);
     
     printf("digite a area da carta1:");
     scanf("%f", &carta1.area);
      
     printf("digite o pib da carta1:");
     scanf("%f", &carta1.pib);

     scanf("%d", &carta1.pontost);

     printf ("digite a populçao da carta2: ");
     scanf("%d", &carta2.popu);
     
     printf("digite a area da carta2:");
     scanf("%f", &carta1.area);

     printf("digite o pib da carta2: ");
     scanf("%f", &carta2.pib);

     printf("digite os pontost da carta2: ");
     scanf("%d",&carta.pontost);


    return 0;
}
