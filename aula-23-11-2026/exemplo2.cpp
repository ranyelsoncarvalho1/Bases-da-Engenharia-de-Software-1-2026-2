#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float y1, float x2, float y2){
	return sqrtf(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    float x1, y1, x2, y2;
    float distancia;

    printf("Coordenada X inicial: ");
    scanf("%f", &x1);

    printf("Coordenada Y inicial: ");
    scanf("%f", &y1);

    printf("Coordenada X final: ");
    scanf("%f", &x2);

    printf("Coordenada Y final: ");
    scanf("%f", &y2);

	//chama uma função
    distancia = calcularDistancia(x1, y1, x2, y2);

    printf("Ponto inicial: (%.2f, %.2f)\n", x1, y1);
    printf("Ponto final: (%.2f, %.2f)\n", x2, y2);
    printf("\nDistancia entre os pontos: %.3f unidades\n", distancia);

    return 0;
}
