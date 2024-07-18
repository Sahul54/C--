
#include <iostream>
#include <fstream>  // Read and write file
using namespace std;

int main() {
    // File ko open kro
    ofstream fout;
    fout.open("writeFile.txt"); // agr ye file available hai to open kr dega, nhi to khud hi create kr dega

    // ab write kr sakta hu
    fout << "Hello ji kaise hai aap log";

    // file close
    fout.close();  // Resource ko release kr paoun

    return 0;
}
