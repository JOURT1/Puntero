#include <stdio.h>

int main(int argc, char *argv[])
{
    float *puntero1;
    float a = 30;

    puntero1 = &a;

    printf("El valor de la varibale a es: %f \n", a);
    printf("La ubicacion en memoria de la variable a es: %p\n", &a);

    *puntero1 = 40;

    printf("El contenido del puntero 1 es: %f\n", *puntero1);
    printf("La ubicacion en memoria a la cual apunta el puntero 1 es %p\n", puntero1);
    printf("El valor de la varibale a es: %f \n", a);

    return 0;
}

/*
float *p;
float h;
p=&h; la ubicacion de memoria
*p=operacion; contenido de la variable
*/