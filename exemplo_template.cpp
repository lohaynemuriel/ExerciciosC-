#include <iostream>
#include <algorithm> // para usar a funcao sort()
#include <vector>
using namespace std;

template<typename T> //criando a funcao para ordenar o vetor
void sort_vector(T vetor[], int tamanhoVetor) {
    sort(vetor, vetor + tamanhoVetor); //chama funcao sort()
}

int main() {
    int v_int[] = { 5, 2, 9, 3, 7 }; //criando vetor
    sort_vector<int>(v_int, 5); //chamando funcao passando o tipo de dados alem dos parametros

    //o mesmo acontece nas linhas abaixo
    float v_float[] = { 3.5, 1.2, 8.6, 2.7 };
    sort_vector<float>(v_float, 4);

    char v_char[] = { 'd', 'a', 'e', 'c', 'b' };
    sort_vector<char>(v_char, 5);

    return 0;
}
