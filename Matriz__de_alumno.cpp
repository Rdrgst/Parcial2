#include <iostream>

using namespace std;

double promedio [10][3];

int main() {

    
    
    cout << "==== MATRIZ DE ALUMNOS ====\n";
    
    cout << "Ingrese los promedios de los alumnos del 1er grupo: \n";
    for (int i = 0; i < 10; i++) {
        cout << "Alumno " << (i + 1) << ": ";
        cin >> promedio[i][0];
    }
    cout << "Ingrese los promedios de los alumnos del 2do grupo: \n";
    for (int i = 0; i < 10; i++) {
        cout << "Alumno " << (i + 1) << ": ";
        cin >> promedio[i][1];
    }

    cout << "Los promedios mas altos de cada posicion son: \n";
    for (int i = 0; i < 10; i++) {
        if (promedio[i][0] > promedio[i][1]) {
            promedio[i][2] = promedio[i][0];
        }
        else {
            promedio[i][2] = promedio[i][1];
        }
    cout << "Alumnos " << (i + 1) << ": " << promedio[i][2] << "\n";
    }

    cout << "\nAlumnos del 1er grupo: \tAlumnos del 2do grupo: \tPromedios mas altos: \n";
    for (int i = 0; i < 10; i++) {
        cout << promedio[i][0] << "\t\t\t"<< promedio[i][1] << "\t\t\t" << promedio[i][2] << "\n";
    }
   return 0;
}