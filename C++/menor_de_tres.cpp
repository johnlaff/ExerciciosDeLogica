#include <iostream>

using namespace std;

int main (){

    int valor1, valor2, valor3, menor;

    cout << "Primeiro valor: ";
    cin >> valor1;
    cout << "Segundo valor: ";
    cin >> valor2;
    cout << "Terceiro valor: ";
    cin >> valor3;

    if (valor1 < valor2 && valor1 < valor3){
        menor = valor1;
    }
    else if (valor2 < valor3){
        menor = valor2;
    }
    else {
        menor = valor3;
    }

    cout << "MENOR = " << menor << endl;

    return 0;
}