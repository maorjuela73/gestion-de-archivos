#include <iostream>
#include <string>
using namespace std;

// Función de utilidad para mostrar el resultado de comparación
void displayResult(const string& s, int result) {
    if (result == 0) {
        cout << s << " == 0\n";
    } 
    else if (result > 0) {
        cout << s << " > 0\n";
    } 
    else { // result < 0
        cout << s << " < 0\n";
    }
}


int main() {
    // Declaración de cadenas constantes
    const string s1{"Testing the comparison functions."}; // s1 con valor inicial
    const string s2{"Hello"};  // s2 con valor "Hello"
    const string s3{"stinger"}; // s3 con valor "stinger"
    const string s4{s2}; // s4 se inicializa con el valor de s2 ("Hello")

    // Imprimir los valores iniciales de s1, s2, s3 y s4
    cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3 << "\ns4: " << s4 << "\n\n";

    // Comparación de s1 y s4
    if (s1 > s4) {
        cout << "s1 > s4\n";
    } else {
        cout << "s1 <= s4\n";
    }

    // Comparación de s1 y s2
    displayResult("s1.compare(s2)", s1.compare(s2));

    // Comparación de una subcadena de s1 (elementos 2-6) con una subcadena de s3 (elementos 0-4)
    displayResult("s1.compare(2, 5, s3, 0, 5)", s1.compare(2, 5, s3, 0, 5));

    // Comparación de s2 y s4
    displayResult("s4.compare(0, s2.size(), s2)", s4.compare(0, s2.size(), s2));

    // Comparación de s2 y s4
    displayResult("s2.compare(0, 3, s4)", s2.compare(0, 3, s4));

    return 0;
}
