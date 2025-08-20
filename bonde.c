#include <stdio.h>

int main()
{
	int n3, n4, auxi;

	printf("Digite os alunos: ");
	scanf("%d", &n3);
	printf("Digite os monitores: ");
	scanf("%d", &n4);
	auxi= n3+n4;

	printf("%d\n", auxi);

	if (auxi <= 50) {
		printf("todos podem ir \n");

	}		else {
		printf("sem viagem ");
	}
	return 0;
}
