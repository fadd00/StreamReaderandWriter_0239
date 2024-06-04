#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main(){
    string baris;

    ofstream outfile;
    outfile.open("contoh.txt")

    cout << ">=write file, \'q\' exit" << endl;

while(true){
    cout << "- ";
    getline(cin, baris);
    if(baris == "q") break;
    outfile << baris << endl;
}
outfile.close();
}
