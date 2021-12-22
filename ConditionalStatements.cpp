#include <iostream>

using namespace std;

void nomeNumero(int num) {
    switch(num){
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        case 4:
            cout << "four" << endl;
            break;
        case 5:
            cout << "five" << endl;
            break;
        case 6:
            cout << "six" << endl;
            break;
        case 7:
            cout << "seven" << endl;
            break;
        case 8:
            cout << "eight" << endl;
            break;
        case 9:
            cout << "nine" << endl;
            break;
    }
}

void nomeMaior(){
    cout << "Greater than 9" << endl;
}

int main() {
    int valor;
    cin >> valor;

    if(1 <= valor && valor <= 9) {
        nomeNumero(valor);
    }else if(valor > 9) {
        nomeMaior();
    }
}