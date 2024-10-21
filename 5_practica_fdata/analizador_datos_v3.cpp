#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string nombre_archivo = "fdata41.1-3.txt";

int main() {
    double numero, maximo, minimo;
    ifstream fin(nombre_archivo);

    fin >> maximo;
    minimo = maximo;

    while (!fin.eof()) {
        fin >> numero;

        if (numero > maximo) {
            maximo = numero;
        }
        
        if (numero < minimo) {
            minimo = numero;
        }
    }

    fin.close();
 
    //Write the greatest and lowest value in a file
    fstream fout("maxmin.txt", fstream::out);
    fout << maximo << " " << minimo << endl;
    fout.close();
    
    // Retornar 0 para indicar que la ejecución fue exitosa
    return 0;
}
