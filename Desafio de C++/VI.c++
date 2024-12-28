// 6: Implemente uma função que verifique se uma string é um palíndromo.

#include <iostream>
#include <string>

bool ehPalindromo(const std::string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1]) return false;
    }
    return true;
}

int main() {
    std::string str = "radar";
    std::cout << str << (ehPalindromo(str) ? " é um palíndromo." : " não é um palíndromo.") << std::endl;
    return 0;
}
