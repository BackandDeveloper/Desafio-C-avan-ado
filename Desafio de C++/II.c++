// 2: Implemente uma função que verifique se um número é primo.

#include <iostream>

bool ehPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 17;
    std::cout << num << (ehPrimo(num) ? " é primo." : " não é primo.") << std::endl;
    return 0;
}
