#include <iostream>
#include <string>

using namespace std;

double calcularPromedio (double calificaciones [3]) {
        double suma = 0;
        for (int i = 0; i < 3; i++) {
            suma += calificaciones[i];
        }
        return suma / 3;
}


int main() {

    struct Alumno { 
        string nombre; 
        int matricula; 
        double calificaciones [3]; 
    } alumnos [5];


    cout << "==== ==== ====\n";

    for ( int i = 0; i < 5; i++) {
        cout << "Ingrese el nombre del alumno " << (i + 1) << ": ";
        getline (cin, alumnos[i].nombre);
        cout << "Ingrese la matricula del alumno " << (i + 1) << ": ";
        cin >> alumnos[i].matricula;
        cin.ignore(); 

        cout << "Ingrese las calificaciones del alumno " << (i + 1) << ": ";
        for (int j = 0; j < 3; j++) {
            cin >> alumnos[i].calificaciones[j];
        }
        cin.ignore();
    }
 cout << "\nNombre: \tMatricula: \tPromedio: \n";
    for (int i = 0; i < 5; i++) {
        cout << alumnos[i].nombre << "\t\t\t"<< alumnos[i].matricula << "\t\t\t" << calcularPromedio(alumnos[i].calificaciones) << "\n";
    }

    return 0;
}