#include <iostream>
#include <set>
using namespace std;
int main() {
  set<int> mySet; //criando um set

  // Insere elementos
  mySet.insert(10);
  mySet.insert(20);
  mySet.insert(30);

  // Encontra o elemento 20 no conjunto com o comando find()
  set<int>::iterator it = mySet.find(20);
  if (it != mySet.end()) {
    cout << "Encontrado: " << *it << endl;
  } else {
    cout << "Nao encontrado" << endl;
  }

  // Conta o número de ocorrências do elemento 30 no conjunto
  int count = mySet.count(30);
  cout << "O elemento 30 aparece " << count << " vezes" << endl;

  return 0;
}
