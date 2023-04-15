#include <iostream>
#include <string>
using namespace std;

class Animal{
    private:
        string nome;
        int idade;
    public:
        Animal(string nome, int idade): nome(nome), idade(idade) {}

        string getNome() const{ 
            return nome;
        }

        void setNome(string name){
            this->nome = name;
        }

        int getIdade()const { 
            return idade;
        }

        void setIdade(int age){
            this->idade=age;
        }

        void imprimeDados(){
            cout << "Nome do animal: " << getNome() << endl;
            cout<< "Idade do animal: " << getIdade() << endl;
        }
};

class Cachorro: public Animal{
    private:
        string raca;
    public:
        Cachorro(string nome, int idade, string raca): Animal(nome, idade), raca(raca){}
        
        string getRaca()const { 
            return raca;
        }

        void setRaca(string raca){
            this->raca = raca;
        }

        void imprimeDados(){
            cout << "Nome do cachorro: " << getNome() << endl;
            cout<< "Idade do cachorro: " << getIdade() << endl;
            cout << "Raça do cachorro: " <<getRaca() << endl;
        }

};
int main(){

    char resposta;
    string name, raca;
    int age;    

    cout<<"Seu animal é um cachorro? (S/N)"<<endl;
    cin>> resposta;
    if(resposta=='S'){
        cout<<"Qual o nome do cachorro?" << endl;
        cin >> name;
        cout<<"Qual a idade dele?" << endl;
        cin >> age;
        cout<<"Qual a raça dele?" << endl;
        cin >> raca;

        Cachorro* cachorro = new Cachorro(name, age, raca);
        cachorro->imprimeDados();
        delete(cachorro);

    }else{
        cout<<"Qual o nome do animal?" << endl;
        cin >> name;
        cout<<"Qual a idade dele?" << endl;
        cin >> age;

        Animal* animal = new Animal(name, age);
        animal->imprimeDados();
        delete(animal);
    }

    return 0;
}