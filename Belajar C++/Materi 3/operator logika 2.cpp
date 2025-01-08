#include<iostream>
using namespace std;

int main(){
    int bilangan;
    bool kondisi;
    cout<<"Masukkan bilangan yang ingin di uji = ";
    cin>>bilangan;
    kondisi = bilangan % 2 == 0;

    string uji = kondisi == 1?"Genap":"Ganjil";

    cout<<"Maka bilangan "<<bilangan<<" merupakan bilangan "<<uji;
}