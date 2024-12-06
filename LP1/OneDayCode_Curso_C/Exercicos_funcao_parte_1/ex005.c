#include <stdio.h>
#include <locale.h>

// Função que recebe um número inteiro n > 0 e devolve o número de dígitos e o primeiro dígito
void recebeInteiro(int numero, int* numDigitos, int* primeiroDigito) {
    *numDigitos = 0; // Inicializa o contador de dígitos
    int copiaNumero = numero; // Para extrair o primeiro dígito sem alterar o número original

    // Armazena o primeiro dígito
    while (copiaNumero >= 10) {
        copiaNumero /= 10;  // Divide o número até que sobre apenas o primeiro dígito
    }
    *primeiroDigito = copiaNumero;

    // Conta o número de dígitos
    while (numero != 0) {
        (*numDigitos)++;
        numero /= 10;
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n = 12345; // Número a ser analisado
    int numDigitos, primeiroDigito;

    // Chama a função para obter os resultados
    recebeInteiro(n, &numDigitos, &primeiroDigito);

    // Exibe os resultados
    printf("O número %d tem %d dígitos e o primeiro dígito é %d.\n", n, numDigitos, primeiroDigito);

    return 0;
}
