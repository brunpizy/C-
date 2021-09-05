#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592683589793238462643382795
#define com 2.50

int main()
{
    float qi,qf,k, p;

    printf("Digite a quilometragem inicial: ");
    scanf("%f",& qi);
    printf("Digite a quilometragem final: ");
    scanf("%f",& qf);
    printf("Digite a quantidade de combustivel gasto, em litros: ");
    scanf("%f",& k);
    printf("Digite o valor pago pelos passageiros: ");
    scanf("%f",& p);

    printf("\n A media de consumo em quilometros por litro e = %0.5f\n\n",(qf-qi)/k) ;
    printf("\n O lucro, liquido, em reais = %0.2f\n\n", p -(k*com)) ;


    system("pause");

}
