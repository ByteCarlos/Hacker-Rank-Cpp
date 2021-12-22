#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int inteiro;
    long longo;
    char caractere;
    float real;
    double realLongo;
    
    cin >> inteiro >> longo >> caractere >> real >> realLongo;
    cout << inteiro << endl;
    cout << longo << endl;
    cout << caractere << endl;
    cout << fixed << setprecision(3);
    cout << real << endl;
    cout << fixed << setprecision(9);
    cout << realLongo << endl;
    return 0;
}
