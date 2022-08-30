/*
Entrada: número inteiro
Exemplos utilizados: 1,2,-3,6,12
Saida: "Um", "Dois", "Numero invalido", "Seis", "Numero invalido"

*/

#include <stdio.h>

int extenso(int n)
{

    switch(n){

        case 0:
            printf("Zero");
            break;

        case 1:
            printf("Um");
            break;

         case 2:
            printf("Dois");
            break;

         case 3:
            printf("Tres");
            break;

          case 4:
            printf("Quatro");
            break;

          case 5:
            printf("Cinco");
            break;

          case 6:
            printf("Seis");
            break;

           case 7:
            printf("Sete");
            break;

           case 8:
            printf("Oito");
            break;

           case 9:
            printf("Nove");
            break;

           case 10:
            printf("Dez");
            break;

         default:
             printf("Numero invalido");
    }
}

main(n)
{
    int numero,numeroExtenso;

    printf("Escreva um numero de 0 a 10\n");
    scanf("%d", &numero);

    numeroExtenso = extenso(numero);


}
