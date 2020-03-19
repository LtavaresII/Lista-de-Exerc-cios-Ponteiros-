#include <stdio.h>

int main()
{
    int pulo[5] = {1,2,3,4,5};

    printf("Posicao 3: %d \n", *(pulo + 2));
    printf("Posicao 5: %d \n", *(pulo + 4));
    printf("Endereco da posicao 3: %d \n", pulo + 2);
    printf("Endereco da posicao 5: %d \n", pulo + 4);

    return 0;
}
