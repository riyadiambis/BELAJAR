#include<iostream>
using namespace std;

int main(){
    cout<<"USIA ANDA PADA TAHUN TERTENTU"<<endl;
    int sekarang, tahun_lahir, usia;
    cout<<"Sekarang tahun berapa = ";
    cin >> sekarang;
    cout<<"Tahun berapa kamu lahir = ";
    cin >> tahun_lahir;
    usia = sekarang - tahun_lahir;
    cout<<"Jadi di tahun "<<sekarang<<" kamu akan berusia "<<usia<<" tahun"<<endl;

}