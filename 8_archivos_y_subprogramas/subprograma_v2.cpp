#include <iostream>
#include <fstream>
using namespace std;
 
string readContent(string filename) {
    string s, contents = "";
    
    fstream fin(filename);
    while (!fin.eof()) {
        getline(fin, s);
        contents += s + "\n";
    }
    fin.close();
    
    return contents;
}
 
void writeContent(string filename, string contents) {
    fstream fout(filename, fstream::out);
    fout << contents;
    fout.close();
}
 
int main() {
    string source, destination;
    
    cout << "Enter source filename: ";
    cin >> source;
    
    cout << "Enter destination filename: ";
    cin >> destination;
    
    string c = readContent(source);   //Equivalent to:
    writeContent(destination, c);     //writeContent(destination, readContent(source))
    
    return 0;
}