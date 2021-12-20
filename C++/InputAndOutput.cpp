#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numeros[3];
    for(int i = 0; i < 3; i ++){
        int valor;
        cout << "Qual o numero na posicao " << i << "?" << endl;
        cin >> valor;
        numeros[i] = valor;
    }
    int soma = 0;
    for(int i = 0; i < 3; i++)
        soma += numeros[i];
    cout << soma << endl;
    return 0;
}