#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
    // Definir el nombre del archivo de salida
    fs::path filePath{"clientes_cuentas.txt"};

    // Abrir el archivo de salida
    ofstream outFile(filePath, ios::out);

    // Verificar si el archivo se abrió correctamente
    if (!outFile) {
        cerr << "Error al abrir el archivo " << filePath << " para escribir." << endl;
        return 1;
    }

    cout << "Ingrese los datos de los clientes (número de cuenta, nombre, balance). Ingrese -1 para finalizar.\n";

    int cuenta;
    string nombre;
    double balance;

    // Obtener los datos de los clientes y escribirlos en el archivo
    while (true) {
        cout << "Número de cuenta (o -1 para finalizar): ";
        cin >> cuenta;
        if (cuenta == -1) {
            break;
        }

        cout << "Nombre del cliente: ";
        cin.ignore();  // Ignorar el salto de línea previo
        getline(cin, nombre);

        cout << "Balance: ";
        cin >> balance;

        // Escribir la información en el archivo
        outFile << cuenta << " " << nombre << " " << balance << endl;

        cout << "Registro guardado.\n";
    }

    // Cerrar el archivo
    outFile.close();
    cout << "Datos guardados en el archivo " << filePath << endl;

    return 0;
}
