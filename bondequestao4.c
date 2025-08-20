#include <stdio.h>


int main()
{
    float a, l, area, perimetro;

    printf("Digite a altura do retângulo: ");
    scanf("%f", &a);

    printf("Digite a largura do retângulo: ");
    scanf("%f", &l);

    area = a * l;
    perimetro = 2 * a + 2 * l;

    if (perimetro > area) {
        printf("Perímetro maior que área\n");
    } else if (area == perimetro) {
        printf("Área igual ao perímetro\n");
    } else {
        printf("Área maior que perímetro\n");
    }

    return 0;
}
