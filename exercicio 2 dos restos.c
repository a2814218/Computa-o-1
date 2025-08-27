#include <stdio.h>

int main() {
    int i;
    int n;
    printf("digite um numero natural");
    scanf("%d",&n);
    
    for (i = 1; i <= 100; i ++)
        if(i % n  == 2){
        printf("%d\n", i);
    }

    return 0;
}
