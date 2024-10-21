#include <iostream>
#include <string>
using namespace std;

int main() {
    // Inicialización de cadenas
    string s1{"cat"};  // s1 se inicializa con la cadena "cat"
    string s2;         // s2 se inicializa a una cadena vacía
    string s3;         // s3 se inicializa a una cadena vacía

    // Asignaciones
    s2 = s1;                // asignar s1 a s2
    s3.assign(s1);          // asignar s1 a s3

    // Imprimir valores iniciales de s1, s2 y s3
    cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3 << "\n\n";

    // Modificación de caracteres específicos
    s2.at(0) = 'r';         // modificar el primer carácter de s2
    s3.at(2) = 'r';         // modificar el tercer carácter de s3

    // Imprimir valores después de los cambios
    cout << "Después de los cambios:\ns2: " << s2 << "\ns3: " << s3 << "\n";

    // Concatenación de cadenas
    cout << "\nDespués de las concatenaciones:\n";
    string s4{s1 + "apult"};  // concatenar "apult" a s1 y asignar a s4
    s1.append("acomb");            // crear "catacomb" al añadir "acomb" a s1
    s3 += "pet";                   // crear "carpet" usando el operador sobrecargado +=

    // Imprimir valores de s1, s3 y s4 después de la concatenación
    cout << "s1: " << s1 << "\ns3: " << s3 << "\ns4: " << s4 << "\n";

    // Añadir una porción de s1 a s5
    // Crear cadena "comb" (s5 inicialmente está vacía)
    string s5;  // s5 se inicializa como una cadena vacía
    s5.append(s1, 4, s1.size() - 4); // Añadir desde la posición 4 hasta el final de s1

    // Imprimir valor de s5
    cout << "s5: " << s5 << "\n";

    return 0;
}
