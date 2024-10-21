#include <iostream>
#include <fstream>
using namespace std;
 
 
int main() {
    string s, contents = "";
    
    fstream fin1("texto1.txt");
    fstream fin2("texto2.txt");
    fstream fout("final.txt", fstream::out);
    
    while (!fin1.eof()) {
        getline(fin1, s);
        contents += s + "\n";
    }
    
    while (!fin2.eof()) {
        getline(fin2, s);
        contents += s + "\n";
    }
    
    fout << contents;
    
    fout.close();
    fin2.close();
    fin1.close();
    
    return 0;
}