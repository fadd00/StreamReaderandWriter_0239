#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(){
    string baris;
    ofstream outfile;
    outfile.open("contoh.txt");
    cout << ">=write file, \'q\' exit" << endl;
    while (true){
        cout << "- ";
        getline(cin, baris);
        if (baris == "q")
            break;
        outfile << baris << endl;
    }outfile.close();
    ifstream infile;
    infile.open("contoh.txt");
    cout << endl
         << ">= opening and reading the file" << endl;
    if (infile.is_open()){
        while (getline(infile, baris)){
            cout << baris << '\n';
        }infile.close();
    }else
        cout << "unable to open file";
    return 0;
}