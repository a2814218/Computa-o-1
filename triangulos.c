#include<stdio.h>
#include<math.h>

int main() {

	float a, b, c;

	printf("escolha tres valores para os lados para triangulo");

	scanf("%f %f %f",&a,&b,&c);

	if(a+b <= c || b+c<=a || a+c<=b) {
		printf("isso nao e um triangulo");
	}
	else {
		if(a==b && b==c) {
			printf("o triangulo e equilatero");
		}
		else if(a != b && b!=c && a!= c) {
			printf("o triangulo e escaleno");
		}

		else {
			if(a==b && b!=c) {
				printf("isosceles");
			}
			else if(a==b && b!=a) {
				printf("isosceles");
			}
			else if( b==c && a!=c) {
				printf("isosceles");
			}
			else if(b==c && b!=c) {
				printf("isosceles");
			}
			else if(a==c && b!=a) {
				printf("isosceles");
			}
			else if (a==c && b!=c) {
				printf("isosceles");
			}
			else {
				printf("isosceles");
			}
		}
	}
	return 0;

}

