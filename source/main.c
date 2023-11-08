#include <stdio.h>
#include "../librerias/archivodivision.h"
#include "../librerias/archivomultiplicacion.h"
#include "../librerias/archivoresta.h"
#include "../librerias/archivosuma.h"
int main(int argc, char const *argv[])
{
    int a, b;
    printf("ingrese el 1er valor: ");
    scanf("%d", &a);
    printf("ingrese el 2do valor: ");
    scanf("%d", &b);
    printf("el resultado de la suma  es: %d\n", suma(a, b));
    printf("el resultado de la resta  es: %d\n", resta(a, b));
    printf("el resultado de la multiplicacion  es: %d\n", multiplicacion(a, b));
    printf("el resultado de la division es: %d\n", division(a, b));
    return 0;
}
