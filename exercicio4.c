int soma_digitos(int n){
    int soma = 0;

    while (n > 0){
        int resto = n % 10;
        soma = soma + resto;
        n /= 10;
    }
    return soma;
}