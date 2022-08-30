#include <stdio.h>

float laranjaTotal (int l, float p, float total)
{
    if (l < 12)
    {
       p = 0.35;
       total = p * l;
       printf("Valor a pagar =  %f", total);
    }
    else if (l >= 12)
    {
        p = 0.30;
        total = p *l;
        printf("Valor a pgar = %f", total);
    }
}



main()
{
    int laranja;
    float preco, precoTotal,pagar;

    printf("Digite o numero de larajnas compradas: ");
    scanf("%d", &laranja);

    precoTotal = laranjaTotal(laranja,preco,pagar);

}
