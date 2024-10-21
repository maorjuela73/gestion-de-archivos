#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string nombre_archivo = "fdata41.1-1.txt";
int i, total;
string valores;

int main() {
    ifstream inputFile(nombre_archivo);
    if (!inputFile) {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    string line;
    if (getline(inputFile, line)) {
        // Procesar la línea leída directamente
        cout << "Línea leída: " << line << endl;
        total = 0;
        for (i = 0; i < 10; i++) {
            total += stoi(valores.substr(i * 4, 3));
        }
    }


    return 0;
}