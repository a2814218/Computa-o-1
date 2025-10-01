#include <stdio.h>
#include<math.h>

int arredonda (float x){
    
    
    

if(x - floor(x) == 0.5f  || x - ceil(x) == -0.5f){

if( x>0) {
    return (int)ceil(x);}
    
    else {
    return (int)floor(x);}
    
    {
        return (int)round(x);
    }
    
    
}
 }   
  int main(){
      
    float numero;  
  printf("Digite um numero aleatorio");
  scanf("%f", &numero);
  printf("O valor do numero arredonda é:%d", arredonda(numero));
  return 0;
  
}

    
