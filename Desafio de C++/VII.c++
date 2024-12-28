// 7: Implemente uma função que ordene um vetor de inteiros em ordem crescente

#include <iostream>
#include <vector>
#include <algorithm>

void ordenarVetor(std::vector<int>& vetor) {
    std::sort(vetor.begin(), vetor.end());
}

int main() {
    std::vector<int> vetor = {5, 3, 8, 1, 2};
    ordenarVetor(vetor);
    std::cout << "Vetor ordenado: ";
    for (int num : vetor) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
