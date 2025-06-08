#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float imc;
    
    printf("Ingrese su peso:");
    scanf("%f", &peso);
    printf("Ingrese su altura:");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    
    printf("Su IMC es de: %.2f\n\n", imc);
    
    printf("peso        | condicion\n");
    printf("<18.5       | peso bajo\n");
    printf("18.5 a 24.9 | peso normal\n");
    printf("25.0 a 29.9 | sobrepeso\n");
    printf("30.0>       | obesidad\n");
    
    if (imc < 18.5){ printf("\nEsta en la categerio: Peso Bajo");}
    else if (imc >=18.5 && imc <24.9){ printf("\nEsta en la categoria: Peso normal");}
    else if (imc >=25.0 && imc <29.9){ printf("\nEsta en la categoria: Sobrepeso");}
    else if (imc > 30){ printf("\nEsta en la categoria: obesidad");}

    return 0;
}
