#include <stdio.h>

int main()
{
    int i,j;
    int *p,*q;

    // ilegal
    p = i;
    q = &j;
    p = &*&i;
    // ilegal
    i = (*&)j;
    i = *&j;
    i = *&*&j;
    // ilegal
    q = *p;
    i = (*p)++ + *q;

    return 0;
}
