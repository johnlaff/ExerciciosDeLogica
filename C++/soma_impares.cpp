#include <iostream>

using namespace std;

int main(){

    int x, y, temp, soma = 0;

    cout << "Digite dois numeros: " << endl;
    cin >> x >> y;

    if (x > y){
        temp = x;
        x = y;
        y = temp;
    }

    for (int i = x+1; i < y; i++){
        if (i % 2 != 0){
            soma += i;
        }
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;

    return 0;
}