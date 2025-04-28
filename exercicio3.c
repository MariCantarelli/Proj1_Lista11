#include <stdio.h>

int quantidade_digitos(int n){
    int contador = 0;

    if (n == 0) {
        return 1;  // Zero tem 1 dígito
    }
 
    while (n != 0){
        contador++;
        n /= 10;
    }
    return contador;
}