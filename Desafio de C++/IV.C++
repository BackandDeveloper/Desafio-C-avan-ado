// 4: Implemente uma função que inverta uma string.

#include <iostream>
#include <string>

std::string inverterString(const std::string& str) {
    std::string invertida = str;
    int n = invertida.length();
    for (int i = 0; i < n / 2; ++i) {
        std::swap(invertida[i], invertida[n - i - 1]);
    }
    return invertida;
}

int main() {
    std::string str = "Hello, World!";
    std::cout << "String invertida: " << inverterString(str) << std::endl;
    return 0;
}
