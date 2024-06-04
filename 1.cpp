#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(){
    string baris;
    string FileName;
    cout << "insert File Name : ";
    cin >> FileName; 
    ofstream outfile;
    outfile.open(FileName + ".txt", ios::out);
    cout << ">=write file, \'q\' exit" << endl;
    while (true){
        cout << "- ";
        getline(cin, baris);
        if (baris == "q")
            break;
        outfile << baris << endl;
    }outfile.close();
    ifstream infile;
    infile.open(FileName + ".txt" , ios::in);
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