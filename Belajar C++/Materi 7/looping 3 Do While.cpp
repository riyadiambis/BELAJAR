#include<iostream>
using namespace std;

int main(){
    int L, p, l;
    string ulang;
    do{
        cout<<"=======================================\n";
        cout<<"Masukkan penjang (m)\t : ";
        cin>>p;
        cout<<"Masukkan lebar (m)\t : ";
        cin>>l;
        L = p*l;
        cout<<"Luas Persegi Panjang tersebut "<<L<<" Mater"<<endl;
        cout<<"========================================\n";
        cout<<"\nApakah anda masih ingin menghitung (y/n) : ";
        cin>>ulang;
    } while(ulang == "y");
    return 0;
}