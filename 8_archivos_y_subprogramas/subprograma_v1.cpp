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
    return contents;
    
    fin.close();
}

int main()
{
    readContent("archivo.txt");
    return 0;
}
