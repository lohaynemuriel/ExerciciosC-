#include <iostream>
#include <cmath>

using namespace std;

class Potencia{
    private:
        int base, expoente;
    
    public:

    Potencia (){}
    
    Potencia(int base, int expoente): base(base), expoente(expoente){}

    double calcula(int base, int expoente){
        cout << "Calcula int\n";
        return pow(base, expoente);
    }


    double calcula(int base, double expoente){
        cout << "Calcula int e double\n";
        return pow(base, expoente);
    }

    
    double calcula(double base, double expoente){
        cout << "Calcula double\n";
        return pow(base, expoente);
    }
};


int main(){

    Potencia* potencia = new Potencia();

    cout << "Resultado do método 1: " << potencia->calcula(6,3) <<endl;
    cout << "Resultado do método 1: " << potencia->calcula(5,3.5) <<endl;
    cout << "Resultado do método 1: " << potencia->calcula(7.8,3.9) <<endl;

    delete(potencia);
    return 0;
}