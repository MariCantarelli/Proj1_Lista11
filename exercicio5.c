int minimo(int S[], int n) {
    if (n == 1) {
        return S[0]; // Caso base
    } else {
        int min_restante = minimo(S, n - 1);
        if (S[n-1] < min_restante) {
            return S[n-1];
        } else {
            return min_restante;
        }
    }
}

int minimo(int S[], int n) {
    if (n == 1) {
        return S[0]; // Caso base
    } else {
        int min_restante = minimo(S, n - 1);
        if (S[n-1] < min_restante) {
            return S[n-1];
        } else {
            return min_restante;
        }
    }
}

int soma_elementos(int S[], int n) {
    if (n == 0) {
        return 0; // Caso base: vetor vazio soma 0
    } else {
        return S[n-1] + soma_elementos(S, n-1);
    }
}

int soma_pares(int S[], int n) {
    if (n == 0) {
        return 0; // Caso base
    } else {
        if (S[n-1] % 2 == 0) { // Se é par
            return S[n-1] + soma_pares(S, n-1);
        } else {
            return soma_pares(S, n-1);
        }
    }
}

int busca_linear(int S[], int n, int valor) {
    if (n == 0){
        return -1;
    } if (S[n-1] == valor){
        return n-1;
    }
    return busca_linear(S, n-1, valor);
}


