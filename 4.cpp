#include<iostream>
using namespace std;

int main(){
    try{
        cout << "selamat beajar di prodi ti" << endl;
        throw 0.5;
        cout << "pernyataan tidak akan dieksekusi" << endl;
    }catch(int a){
        cout << "pengecualian akan dieksekusi" << endl;
    }catch(...){
        cout << "default pengecualian akan di eksekusi" << endl;
    }return 0;
}