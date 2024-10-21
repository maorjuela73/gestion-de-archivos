#include <iostream>
#include <fstream>
using namespace std;

const string nombre_archivo = "fdata41.1-2.txt";

int main() {

    double total = 0;
    int contador = 0;
    
    // Cadena para almacenar cada línea leída del archivo
    string numeroCadena;
    
    // Abrir el archivo con el nombre dado
    fstream archivo(nombre_archivo);

    // Leer la primera línea del archivo
    getline(archivo, numeroCadena);

    // Bucle hasta que se llegue al final del archivo
    while (numeroCadena != "End of file") {
        // Convertir la cadena a un valor double y sumarlo al total
        total += stod(numeroCadena);
        
        // Incrementar el contador de números
        contador += 1;
        
        // Leer la siguiente línea del archivo
        getline(archivo, numeroCadena);
    }

    // Cerrar el archivo
    archivo.close();

    // Si hay números, imprimir el promedio
    if (contador > 0) {
        cout << total / contador << endl;
    }

    // Retornar 0 para indicar que la ejecución fue exitosa
    return 0;
}
