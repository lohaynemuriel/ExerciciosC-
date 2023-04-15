#include <iostream>
#include <map>
using namespace std;
int main() {
  map<int, bool> myMap;

  // Insere alguns elementos no mapa
  myMap.insert(make_pair(10, true));
  myMap.insert(make_pair(20, true));
  myMap.insert(make_pair(30, true));

  // Encontra o elemento 20 no mapa
  map<int, bool>::iterator it = myMap.find(20);
  if (it != myMap.end()) {
    cout << "Encontrado: " << it->first << endl;
  } else {
    cout << "Nao encontrado" << endl;
  }

  // Conta o número de ocorrências do elemento 30 no mapa
  int count = myMap.count(30);
  cout << "O elemento 30 aparece " << count << " vezes" << endl;

  return 0;
}
