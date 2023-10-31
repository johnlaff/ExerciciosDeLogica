#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int n;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;
    cin.ignore();

    string nome[n];
    int idade[n];
    double altura[n], somaAltura = 0, alturaMedia = 0, menor16 = 0, porcentagem = 0;

    for (int i = 0; i < n; i++){
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
        cin.ignore();
    }

    for (int i = 0; i < n; i++){
        somaAltura += altura[i];
    }

    alturaMedia = (double) somaAltura / n;

    for (int i = 0; i < n; i++){
        if (idade[i] < 16){
            menor16++;
        }
    }

    // Porcentagem das pessoas com menos de 16 anos
    porcentagem = (double) menor16 / n * 100;

    cout << fixed << setprecision(2);
    cout << "Altura media: " << alturaMedia << endl;
    cout << fixed << setprecision(1);
    if (menor16 > 0){
        cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;
        for (int i = 0; i < n; i++){
            if (idade[i] < 16){
                cout << nome[i] << endl;
            }
        }
    }

    return 0;
}