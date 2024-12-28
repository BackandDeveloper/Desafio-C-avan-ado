// 1: Implemente uma função que receba um vetor de inteiros e retorne a soma de seus elementos.

#include <iostream>
#include <vector>

int somaVetor(const std::vector<int>& vetor) {
    int soma = 0;
    for (int num : vetor) {
        soma += num;
    }
    return soma;
}

int main() {
    std::vector<int> vetor = {1, 2, 3, 4, 5};
    std::cout << "Soma dos elementos: " << somaVetor(vetor) << std::endl;
    return 0;
}

