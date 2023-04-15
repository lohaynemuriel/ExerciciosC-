#include <iostream>
#include <string>

using namespace std;

class Veiculo{
    private:
        string marca;
        int ano;
    public:
        Veiculo(string marca, int ano): marca(marca), ano(ano){}

        string getMarca() const {
            return marca;
        }

        void setMarca(string marca){
            this->marca=marca;
        }

        int getAno() const {
            return ano;
        }

        void setAno(int ano){
            this->ano=ano;
        }

        void imprimeDados(){
            cout << "Marca: " << getMarca() << endl;
            cout<< "Ano: " << getAno() << endl;
        }
};

class Carro: public Veiculo{
    private:
        string modelo;
    public:
        Carro(string marca, int ano, string modelo): Veiculo(marca, ano), modelo(modelo){}

        string getModelo(){
            return modelo;
        }

        void setModelo(string modelo){
            this->modelo=modelo;
        }

        virtual void imprimeDados(){
            cout << "Marca: " << getMarca() << endl;
            cout<< "Ano: " << getAno() << endl;
            cout<< "Modelo: " << getModelo() << endl;

        }
};


class Moto: public Veiculo{
    private:
        string modelo;
    public:
        Moto(string marca, int ano, string modelo): Veiculo(marca, ano), modelo(modelo){}

        string getModelo(){
            return modelo;
        }

        void setModelo(string modelo){
            this->modelo=modelo;
        }

        virtual void imprimeDados(){
            cout << "Marca: " << getMarca() << endl;
            cout<< "Ano: " << getAno() << endl;
            cout<< "Modelo: " << getModelo() << endl;

        }
};



int main(){
    string marca, modelo;
    int ano, escolha;

    cout << "Qual o seu veiculo?" << endl << "1.Carro\n2.Moto\n3.Outros" <<endl;
    cin >> escolha;

    cout << "Qual a marca?" << endl;
    cin >> marca;
    cout << "Qual o ano?" << endl;
    cin >> ano;

    Veiculo* veiculo;
    Carro* carro;
    Moto* moto;

    switch (escolha){
        case 1:
            cout << "Qual o modelo?" << endl; 
            cin >> modelo;
            carro = new Carro(marca, ano, modelo);
            carro->imprimeDados();
            delete(carro);
            break;
        case 2:
            cout << "Qual o modelo?" << endl; 
            cin >> modelo;
            moto = new Moto(marca, ano, modelo);
            moto->imprimeDados();
            delete(moto);
            break;
        case 3:
            veiculo = new Veiculo(marca, ano);
            veiculo->imprimeDados();
            break;
        default:
            cout << "Opção inválida" << endl;
    }
    return 0;
}