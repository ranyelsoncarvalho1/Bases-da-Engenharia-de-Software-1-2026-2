#include <stdio.h>

int main(){
    float valor1, valor2, valor3;
    float resultado;

    printf("Valor 1: ");
    scanf("%f", &valor1);

    printf("Valor 2: ");
    scanf("%f", &valor2);

    printf("Valor 3: ");
    scanf("%f", &valor3);

    resultado = ((valor1 / (valor2 * valor3)) + valor3);
    printf("Resultado: %.2f", resultado);

    return 0;
}
