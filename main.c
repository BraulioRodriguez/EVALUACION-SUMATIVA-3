#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;

    printf("***PROGRAMACION DE COMPUTADORAS I***\n");
    printf("EVALUACION SUMATIVA 3\n");
    printf("Introduzca el valor de a: ");
    scanf("%f", &a);
    printf("\nIntroduzca el valor de b: ");
    scanf("%f", &b);
    printf("\nIntroduzca el valor de c: ");
    scanf("%f", &c);

    d=b*b - (4*a*c);

    if (d>0) {
        printf("Resultado 1: %.2f\n", (-b+sqrt(d))/(2*a));
        printf("Resultado 2: %.2f\n", (-b-sqrt(d))/(2*a));
    }
    else if (d==0) {
        printf("Resultado: %.2f", -b/(2*a));
    }
    else  {
        printf("Resultado 1: %.2f + %.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
        printf("Resultado 2: %.2f - %.2fi\n", -b/(2*a), sqrt(-d)/(2*a));
    }    
    
    return 0;
}