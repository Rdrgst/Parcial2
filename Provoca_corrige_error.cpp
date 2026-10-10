#include <iostream>

using namespace std;

//void provoca_error() {
   //int numeros [3] = {1, 2, 3};
    //cout << "Accediendo a un elemento fuera de rango: \n"; 
    //cout << numeros[3] << endl;
//}

void error_arreglado() {
   int numeros [3] = {1, 2, 3};
    cout << "Accediendo a un elemento dentro de rango: \n"; 
    for (int i = 0; i < 3; i++) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
    }
}

int main() {

 cout<< "==== PROVOCA CORRIGE ERROR ====\n";

    //provoca_error();
    error_arreglado();

    return 0;
}