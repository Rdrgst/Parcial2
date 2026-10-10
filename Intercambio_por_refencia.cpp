#include <iostream>

using namespace std;


void intercambio (char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    
cout << "==== INTERCAMBIO POR REFERENCIA ====\n";

char a = 'A';
char b = 'B';

    cout << "\nAntes: \n"; 
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    intercambio(a, b);
    cout << "\nDespues: \n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}