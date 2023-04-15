#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Função que será aplicada em cada elemento do contêiner de entrada
int aoquadrado(int x) {
    return x * x;
}

int main() {
    vector<int> v1 = {7, 10, 3, 6, 9};
    vector<int> v2(v1.size());

    sort(v1.begin(), v1.end()); //ordena o v1 em ordem crescente

    // Aplica a função aoquadrado() em cada elemento de v1 e armazena o resultado em v2
    transform(v1.begin(), v1.end(), v2.begin(), aoquadrado);

    // Imprime os elementos de v2
    for (auto x : v2) {
        cout << x << " ";
    }
    cout << endl;

    auto it = find(v2.begin(), v2.end(), 49); // procura o elemento 49 no v2

    // Verifica se o elemento foi encontrado
    if (it != v2.end()) {
        cout << "Elemento encontrado na posição " << it - v2.begin() << endl;
    } else {
        cout << "Elemento não encontrado" << endl;
    }

    return 0;
}
