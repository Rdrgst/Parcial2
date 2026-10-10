#include <iostream>

int main() {
using namespace std;

    double calificaciones [6];
    double suma = 0;

cout << "=== PROMEDIOS ===\n";
cout << " \n";
cout << "Ingrese sus calificaciones parciales: \n";

for (int i = 0; i < 5; i++) {
       cout << "Calificacion " << (i + 1) << ": ";
         cin >> calificaciones[i];
         suma = suma + calificaciones[i];
    }

    calificaciones[5] = suma / 5;

cout << " \n";
cout << "Tu promedio es: " << calificaciones[5] << "\n";

    return 0;
}