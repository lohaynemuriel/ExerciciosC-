#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector; // Declaração de um vetor de inteiros vazio

    // Adiciona elementos ao vetor
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Percorre e exibe os elementos do vetor
    for (auto it = myVector.begin(); it != myVector.end(); it++) {
        cout << *it << " ";
    }
    cout << std::endl;

    // Acessa um elemento específico do vetor
    cout << "O elemento na posição 1 é: " << myVector[1] << std::endl;

    // Remove o último elemento do vetor
    myVector.pop_back();

    // Exibe o tamanho atual do vetor
    cout << "O tamanho atual do vetor é: " << myVector.size() << std::endl;

    return 0;
}
