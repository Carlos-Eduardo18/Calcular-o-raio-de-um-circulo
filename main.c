#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159

int main() {
    float raio, area;

    // Solicita e lê o raio do círculo do usuário
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Calcula a área do círculo
    area = PI * pow(raio, 2);

    // Exibe a área calculada
    printf("A área do círculo é: %.2f\n", area);

    return 0;
}