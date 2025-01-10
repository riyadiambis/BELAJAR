#include<iostream>
using namespace std;

int main(){
    int pilihan;
    string kelamin;

    cout<<"Pilih salah satu :"<<endl;
    cout<<"1. Laki-laki \n2. Perempuan\n"<<endl;
    cout<<"Pilihan : ";
    cin>>pilihan;


    switch(pilihan){
        case 1 :
            kelamin="Laki-laki";
            break;
        case 2 :
            kelamin="Perempuan";
            break;
        default :
            kelamin = "pilihan salah";
    }
    cout<<"Jenis kelamin saya adalah "<<kelamin<<endl;
}