#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string nombre_completo; 

int main() {

   

    cout << "==== SEPARAR NOMBRE Y APELLIDO ====\n";

    cout << "Ingrese su nombre completo (de izquierda a derecha): ";
    getline(cin, nombre_completo);

    int espacio = nombre_completo.find(' ');

    if (espacio == string::npos) {
        cout << "Error: debes escribir nombre y apellido." << endl;
        return 0;
    }

    string nombre = nombre_completo.substr(0, espacio);
    string apellido = nombre_completo.substr(espacio + 1);

    bool valido = true;

    for (int i = 0; i < nombre.length(); i++) {
        if (isdigit(nombre[i])) {
            valido = false;
        }
    }

    for (int i = 0; i < apellido.length(); i++) {
        if (isdigit(apellido[i])) {
            valido = false;
        }
    }

    if (valido == false) {
        cout << "Error: el nombre y apellido no pueden tener numeros.\n";
    }
    else {
        cout << "Nombre: " << nombre << "\n";
        cout << "Apellido: " << apellido << "\n";
    }

    return 0;
}