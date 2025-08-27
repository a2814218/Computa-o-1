#include<stdio.h>
#include<math.h>

int main() {
	char opcao;
	float a, b, c;
	float resultado;

	
	printf("Digite a opcao (A - Aritmetica, P - Ponderada, G - Geometrica, H - Harmonica): ");
	scanf(" %c", &opcao); 

	
	printf("Digite tres valores separados por espaco: ");
	scanf("%f %f %f", &a, &b, &c);

	
	if (opcao == 'A' || opcao == 'a') {
		resultado = (a + b + c) / 3;
		printf("Media Aritica: %.2f\n", resultado);
	}
	else if (opcao == 'P' || opcao == 'p') {
		resultado = (1*a + 2*b + 3*c) / 6;
		printf("Media Ponderada: %.2f\n", resultado);
	}
	else if (opcao == 'G' || opcao == 'g') {
		resultado = cbrt(a * b * c); // raiz cC:bica
		printf("Media Geomeotrica: %.2f\n", resultado);
	}
	else if (opcao == 'H' || opcao == 'h') {
			resultado = 3 / (1.0/a + 1.0/b + 1.0/c);
			printf("Media Harmonica: %.2f\n", resultado);
		}
	
	else {
		printf("Opcao invalida. Use A, P, G ou H.\n");
	}

	return 0;
}
