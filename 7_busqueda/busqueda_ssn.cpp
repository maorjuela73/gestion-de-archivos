#include <iostream>
#include <fstream>
using namespace std;
 
 
int main() {
    string ssnToSearch, line, ssn, fullName;
    bool found;
    
    cout << "Enter an SSN to search: ";
    cin >> ssnToSearch;
    
    fstream fin("ssn.txt");
    
    found = false;
    while (!fin.eof()) {
        getline(fin, line);
        ssn = line.substr(0, 9);
        fullName = line.substr(10);
        
        //If it is found
        if (ssnToSearch == ssn.substr(0, ssnToSearch.length())) {
        cout << fullName << endl;
        found = true;
            
            //If SSN to search contains 9 digits and it is found, exit loop
            if (ssnToSearch.length() == 9) {
                break;
            }
        }
    }
    
    fin.close();
    
    if (!found) {
     cout << "Not found!" << endl;
    }
    
    return 0;
}