#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num=15, a;
    int *x;

    x = &num;  // x se le asigna la dirección de num
    a = *x;    // a se le asigna el valor de x
    printf("%p %d" ,x,a);

}
