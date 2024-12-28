// 3: Implemente uma função que calcule o fatorial de um número.

#include <iostream>

int fatorial(int num) {
    if (num <= 1) return 1;
    return num * fatorial(num - 1);
}

int main() {
    int num = 5;
    std::cout << "Fatorial de " << num << " é " << fatorial(num) << std::endl;
    return 0;
}
