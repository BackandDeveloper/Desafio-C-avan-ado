// 8: Implemente uma função que conte o número de ocorrências de cada caractere em uma string.

#include <iostream>
#include <string>
#include <unordered_map>

std::unordered_map<char, int> contarCaracteres(const std::string& str) {
    std::unordered_map<char, int> contagem;
    for (char c : str) {
        contagem[c]++;
    }
    return contagem;
}

int main() {
    std::string str = "hello world";
    auto contagem = contarCaracteres(str);
    std::cout << "Contagem de caracteres:\n";
    for (const auto& par : contagem) {
        std::cout << par.first << ": " << par.second << "\n";
    }
    return 0;
}
