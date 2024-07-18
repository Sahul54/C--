#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // Read file
    ifstream fin;

    // file ko open karo
    fin.open("writeFile.txt");

    // fir read kro file ko
    char c;
    // fin>>c;    // ye Space ko ignore kr deta hai
    c = fin.get();  // fin.get() fun space or tab ko as a characcter hi trate krta hai0

    while (!fin.eof())
    {
        cout<<c;
        // fin>>c;  // ye Space ko ignore kr deta hai
        c = fin.get();
    }

    // file ko close kr do
    fin.close();
    
    return 0;
}