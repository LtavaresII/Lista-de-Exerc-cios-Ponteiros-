#include <stdio.h>

int main()
{
    int vet[] = {4,9,13};
    int i;
    printf("\nValores de vet[]: \n");
    for(i=0;i<3;i++){
        printf("Valor da posicao %d: %d \n",i,*(vet+i));
    }

    printf("\nEnderecos de vet[]: \n");
    for(i=0;i<3;i++){
        printf("Endereco da posicao %d: %X \n",i,vet+i);
    }

    return 0;
}
