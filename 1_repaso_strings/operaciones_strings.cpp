#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaración de cadenas
    string s1 = "happy";
    string s2 = " birthday";
    string s3 = "";

    // Longitud de las cadenas
    cout << "s1: \"" << s1 << "\"; longitud: " << s1.length() << endl;
    cout << "s2: \"" << s2 << "\"; longitud: " << s2.length() << endl;
    cout << "s3: \"" << s3 << "\"; longitud: " << s3.length() << endl;

    // Comparación de cadenas
    cout << "\nEl resultado de comparar s2 y s1:" << endl;
    if (s2 == s1) {
        cout << "s2 == s1: true" << endl;
    } else {
        cout << "s2 == s1: false" << endl;
    }

    if (s2 != s1) {
        cout << "s2 != s1: verdadero" << endl;
    } else {
        cout << "s2 != s1: falso" << endl;
    }

    // Verificar si s3 está vacío
    cout << "\nProbando s3.empty():" << endl;
    if (s3.empty()) {
        cout << "s3 está vacío; asignando a s3;" << endl;
        s3 = "feliz cumpleaños";
    }
    cout << "s3: \"" << s3 << "\"" << endl;

    // Verificación de prefijos y sufijos
    cout << "\nVerificando inicio y fin de cadenas:" << endl;
    if (s1.rfind("ha", 0) == 0) { // rfind con posición 0 verifica si empieza con "ha"
        cout << "s1 empieza con \"ha\": verdadero" << endl;
    } else {
        cout << "s1 empieza con \"ha\": falso" << endl;
    }

    if (s2.rfind("ha", 0) == 0) {
        cout << "s2 empieza con \"ha\": verdadero" << endl;
    } else {
        cout << "s2 empieza con \"ha\": falso" << endl;
    }

    if (s1.size() >= 2 && s1.compare(s1.size() - 2, 2, "ay") == 0) {
        cout << "s1 termina con \"ay\": verdadero" << endl;
    } else {
        cout << "s1 termina con \"ay\": falso" << endl;
    }

    if (s2.size() >= 2 && s2.compare(s2.size() - 2, 2, "ay") == 0) {
        cout << "s2 termina con \"ay\": verdadero" << endl;
    } else {
        cout << "s2 termina con \"ay\": falso" << endl;
    }

    return 0;
}
