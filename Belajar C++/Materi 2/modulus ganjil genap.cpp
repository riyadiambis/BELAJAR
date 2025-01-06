#include<iostream>
using namespace std;

int main(){
    cout<<"MENENTUKAN GANJIL GENAP SUATU ANGKA"<<endl;
    int n, hasil;
    cout<<"Masukkan angka = ";
    cin>>n;
    hasil = n % 2;
    string jenis = hasil == 1? "Bilangan Ganjil":"Bilangan Genap";
    cout<<"Jadi bilangan "<<n<<" merupakan "<<jenis<<endl;

}