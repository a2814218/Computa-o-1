#include <stdio.h>

int main() {
    float numero, n, primeiro, segundo, terceiro;
    int i, j;

    
    printf("Digite o valor de n: "); //digite o valor de n igual a quatro 
    scanf("%f", &n);

    
    for(j = 1; j <= n; j++) {
        

        
        

        
        for(i = 1; i <= 3; i++) {
            printf("Digite o numero %d: ", i);
            scanf("%f", &numero);
            
            
            if (i == 1) {
                primeiro = numero;
            } else if (i == 2) {
                segundo = numero;
            } else {
                terceiro = numero;
            }
            
            printf("Você digitou: %f\n", numero);
        }

        
        float media = (primeiro * 2 + segundo * 3 + terceiro * 5) / 10;
        printf("A média ponderada dos números %.2f, %.2f e %.2f é: %.2f\n", primeiro, segundo, terceiro, media);
    }

    return 0;
}

