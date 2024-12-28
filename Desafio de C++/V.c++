// 5: Implemente uma função que calcule a soma dos dígitos de um número.

#include <iostream>

int somaDigitos(int num) {
    int soma = 0;
    while (num > 0) {
        soma += num % 10;
        num /= 10;
    }
    return soma;
}

int main() {
    int num = 12345;
    std::cout << "Soma dos dígitos: " << somaDigitos(num) << std::endl;
    return 0;
}
