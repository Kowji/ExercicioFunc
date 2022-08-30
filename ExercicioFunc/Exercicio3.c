/*
Entrada: Numeros inteiros equivalente a idade das pessoas
Exemplos utilizados: 20,20,30,10;,50,80,70,90;,5410,051,50,9877;

Processamento:Receber o valor das 4 idades, calcular a media e definir quem dentre os 4 e o mais velho

Saida:"Pessoa mais velha e a primeira:","Pessoa mais velha eh a segunda:", "Pessoa mais velha eh a terceira:". "Pessoa mais velha eh a quarta:"
 */



#include <stdio.h>

double idadeMedia (int i1, int i2, int i3, int i4)
{
  return (i1 + i2 + i3 + i4) / 4;
}

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}
int main(){

    int idade1, idade2, idade3, idade4,idadeMaisVelha;


    printf("Dados da primeira pessoa:\n");
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:\n");
    limpar_entrada();
    printf("Idade: ");
    scanf("%d", &idade2);

    printf("Dados da terceira pessoa:\n");
    limpar_entrada();
    printf("Idade: ");
    scanf("%d", &idade3);

    printf("Dados da quarta pessoa:\n");
    limpar_entrada();
    printf("Idade: ");
    scanf("%d", &idade4);




    if (idade1 > idade2)
    {
        printf("Pessoa mais velha eh a primeira: %d\n",idade1);
    }
    else if (idade2 < idade1)
    {
         printf("Pessoa mais velha eh a segunda: %d\n",idade2);
    }
    else if (idade3 > idade4)
    {
        printf("Pessoa mais velha eh a terceira: %d\n",idade3);
    }
    else
    {
     printf("Pessoa mais velha eh a quarta: %d\n",idade4);
    }


	printf("Idade media e:  %.1lf",idadeMedia(idade1,idade2,idade3,idade4));

	return 0;
}
