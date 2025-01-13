#include<iostream>
using namespace std;

int main(){
    int z, batas;
    cout<<"Cetak Ganjil Genap\nMasukkan angka ganjil untuk mencetak Ganjil\nMasukkan angka genap untuk mencetak Genap\n\n";
    cout<<"Masukkan angka = ";
    cin>>z;
    cout<<"Masukkan batas angka = ";
    cin>>batas;

    while(z <= batas){
        cout<<z<<". Saya bahagia banget"<<endl;
        z += 2;
    }
}