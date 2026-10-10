#include <iostream>
#include <random>

using namespace std;

double ingresos [100];
random_device rd;
mt19937 generador(rd());
double suma = 0;

uniform_real_distribution<double> aleatorio(00.0, 1000.0);


int main() {

    cout << "===== INGRESOS DE SUPERMERCADO ====";
    cout <<"\n";

    //for (int i = 0; i <100; i++) {
     // cout << "Ingrese el ingreso " << i + 1 << ": ";
     // cin >> ingresos[i];
     // suma = suma + ingresos[i];
    //}

    for (int i = 0; i < 100; i++) {
        ingresos[i] = aleatorio(generador); 
        suma = suma + ingresos [i];

        cout << "Ingrese el ingreso " << i + 1 << ": $" << ingresos[i] << endl;

    }

    cout << "\n";    
    cout << "La suma de los ingresos es: $" << suma << endl ;
 
  
    return 0;
}