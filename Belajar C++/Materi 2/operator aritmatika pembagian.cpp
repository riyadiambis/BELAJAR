#include<iostream>
using namespace std;

int main(){
    cout<<"Menmbagi dan mengalikan tiga buah angka, hasil di moduluskan"<<endl;
    int a, b, c, hasil, akhir;
    cout<<"Masukkan angka pertama = ";
    cin>>a;
    cout<<"Masukkan angka kedua = ";
    cin>>b;
    cout<<"Masukkan angka ketiga = ";
    cin>>c;
    hasil = a/b*c;
    akhir = hasil%2;
    cout<<"Maka hasil dari "<<a<<" dibagi "<<b<<" dikali "<<c<<" menjadi "<< hasil<<endl;
    cout<<"Jika hasil kita bagi dengan angka 2, maka sisa baginya menjadi"<<akhir;
}