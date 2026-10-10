#include <iostream>

using namespace std;

    double grupo1 [5];
    double grupo2 [5];

    double promedios [5];

int main() {
    cout << "==== PROMEDIO EN GRUPO ====\n";
    cout << " \n";

    cout << "Ingrese los promedios del 1er grupo: \n";

    for (int i = 0; i < 5; i++) {
        cout << "Alumno " << (i + 1) << ": ";
        cin >> grupo1 [i];
        
    }

    cout << " \n";

    cout << "Ingrese los promedios del 2do grupo: \n";
    for (int i = 0; i < 5; i++) {
        cout << "Alumno  " << (i + 1) << ": ";
        cin >> grupo2 [i];

        }

    for (int i = 0; i < 5; i++) {
        if (grupo1[i] > grupo2[i]) {
            promedios[i] = grupo1[i];
        }
        else {
            promedios[i] = grupo2[i];
        }
    }

    cout << " \n";

    cout << "Los promedios mas altos de cada posicion son: \n";
    for (int i= 0; i < 5; i++) {
        cout << "Posicion " << (i + 1) << ": " << promedios [i] << "\n";
    }
    
    return 0;
}