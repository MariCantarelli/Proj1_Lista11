void imprime_binario(int n) {
    if (n > 1) {
        imprime_binario(n / 2);
    }
    printf("%d", n % 2);
}