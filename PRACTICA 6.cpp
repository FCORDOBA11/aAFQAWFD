#include <iostream>
#include <cstring>
using namespace std;

void calcularPerimetro(int ladoCuadrado);
void calcularSuperficie(int ladoCuadrado);

int main(){

    int ladoCuadrado = 0;
    cout << "Ingrese el lado de su cuadrado: "; cin >> ladoCuadrado;

    calcularPerimetro(ladoCuadrado);
    calcularSuperficie(ladoCuadrado);

    return 0;
}

void calcularPerimetro(int ladoCuadrado){
    int perimetro = ladoCuadrado * 4;
    cout << "El perimetro es: " << perimetro << endl;
};

void calcularSuperficie(int ladoCuadrado){
    int superficie = ladoCuadrado * ladoCuadrado;
    cout << "La superficie es: " << superficie << endl;
};