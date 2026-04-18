#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1,numero2,suma,resta,multiplicacion,cociente,resto;
    printf("Introduzca el valor de A: ");
    scanf("%d", &numero1);
    printf("Introduzca el valor de B: ");
    scanf("%d", &numero2);
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    cociente = numero1 / numero2;
    resto = numero1 % numero2;
    printf("La suma de A+B es: %d\n", suma);
    printf("La resta de A-B es: %d\n", resta);
    printf("La multiplicacion de A*B es: %d\n", multiplicacion);
    printf("El cociente entero de A/B es: %d\n", cociente);
    printf("El residuo de A/B es: %d", resto);
    return 0;
}
