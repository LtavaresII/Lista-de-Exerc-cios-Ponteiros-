#include <stdio.h>

int main()
{
    int i=5, *p;
    p = &i;

    printf("Endereco de p: %x \n", p);
    printf("(i +2): %d \n",*p+2);
    printf("(i): %d \n", **&p);
    printf("(3*i): %d \n", 3**p);
    printf("(i+5): %d \n", **&p+4);

    return 0;
}
