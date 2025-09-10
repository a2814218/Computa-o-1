#include <stdio.h>

int main()
{
    int quantidade_1 , quantidade_2, frutas, j;
    float valor, preco, media , soma=0.0, valor1;
    
    
    printf("Hello World\n");
    printf("Digite a quantidade1:");
    quantidade_1 = scanf("%d" , &quantidade_1 );
    printf("Digite a quantidade2:");
    quantidade_2 = scanf("%d" , &quantidade_2);


    
    
    
    
    
    
    
    printf("quantas frutas foram vendidas:");
    scanf("%d", &frutas);
    
    for(j=1 ; j<frutas+1  ;j++)
    {
    printf("Digite o preço da fruta %d: ", j);
    scanf("%f", &preco);
    
    
    soma+= preco;
    } 
    
    media= soma/ frutas;
    


printf("A soma é de: %.2f\n", soma);
printf("A media é de : %.2f\n",media);




printf("digite um valor1 tal que:");
scanf("%f" , &valor1);

if (valor1>0){

if (media == valor1) {
    printf("acertou a media");}
    
else if (media< valor1){
    printf(" Errou para mais");}
    
else{
    printf("Errou para menos");}


}




    return 0;
}
