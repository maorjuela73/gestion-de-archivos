#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string s, contents = "";
    fstream fin;

    fin.open("texto1.txt");
    while (getline(fin, s)) {
        contents += s + "\n";
    }
    fin.close();

    fin.open("texto2.txt");
    while (getline(fin, s)) {
        contents += s + "\n";
    }
    fin.close();

    fstream fout("final.txt", fstream::out);
    fout << contents;
    fout.close();

    return 0;
}