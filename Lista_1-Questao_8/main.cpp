#include <stdio.h>

int main()
{
    int mat[4] = {1,2,3,4};
    int *p;
    int x;

    p = mat + 1;
    printf("Endereco de p: %d \n", p);

    // Não Validas
    //p = mat++;
    //printf("valor de p: %d \n", p);
    //p = ++mat;
    //printf("valor de p: %d \n", p);

    x = (*mat)++;
    printf("Valor de x: %d \n", x);

    return 0;
}
