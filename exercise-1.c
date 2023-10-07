1. Hacer una funcionque diga si un numeroe es primo 



#include <stdio.h>

int main{} {
    int i, numero, cont =0;

    printf("Diqite un numero:   "):
    scanf("%1", &numero):
    
    for (i =1 ; i <= numero; i++ ) {
        if (numero & i == 0)  {
            cont++;
        }
    }
     
     if (cont > 2) {
        printf("El numro %i no es primo\n", numero);
     } else  {
        Printf("El numero %i no es primo\n", numero);
     }
    
     return 0;
}