#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main() {

    // write file
    ofstream fout;
    // file open
    fout.open("WriteAndRead.txt");
    fout << "Hello jii\n";
    fout << "Kaise ho app log\n";
    fout << "Umid hai ki app sab log thik ho gye\n";

    fout.close();

    // Read File 
    ifstream fin;
    fin.open("WriteAndRead.txt");

    string line;

    while (getline(fin, line)) {
        cout << line << endl; // Corrected typo "lime" to "line"
    }

    fin.close();
    return 0;
}
