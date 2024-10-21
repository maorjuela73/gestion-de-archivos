#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> // Para usar std::setw, std::left, std::right, std::fixed, std::setprecision

using namespace std;

int main() {
    // Abrir el archivo de entrada usando ifstream
    ifstream input{"clientes_cuentas.txt", ios::in};

    // Verificar si el archivo se abrió correctamente
    if (input) {
        // Imprimir el encabezado con formato
        cout << left << setw(10) << "Account"
             << setw(13) << "Name"
             << right << setw(7) << "Balance" << "\n";

        int account;
        string name;
        double balance;

        // Mostrar cada registro en el archivo
        while (input >> account >> name >> balance) {
            cout << left << setw(10) << account
                 << setw(13) << name
                 << right << setw(7) << fixed << setprecision(2) << balance << "\n";
        }
    } else {
        // Mensaje de error si no se puede abrir el archivo
        cerr << "No se pudo abrir el archivo\n";
        exit(EXIT_FAILURE);
    }

    return 0;
}
