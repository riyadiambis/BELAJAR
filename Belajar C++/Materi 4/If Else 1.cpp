#include<iostream>
using namespace std;

int main(){
    int pembelian, diskon, total;
    cout<<"Masukkan total pembelian = ";
    cin>>pembelian;
    string pagar(70, '#');
    cout<<pagar<<endl;
    cout<<"Setiap Pembelian Kelipatan 5 Akan Mendapatkan Pengurangan 1"<<endl;
    cout<<pagar<<endl;

    if(pembelian > 5){
        diskon = pembelian/5;
        total = pembelian - diskon;
        cout<<"Anda mendapatkan diskon pembelian"<<endl;
        cout<<"Anda tidak tidak perlu membayar untuk "<<pembelian<<" produk, kerena telah di diskon anda hanya perlu membayar "<<total<<endl;
    } else{
        total = pembelian;
        cout<<"Sayang sekali anda tidak mendapatkan diskon\nAnda tetap harus membayar sebanyak "<<total<<" produk yang telah anda beli"<<endl;

    }
    cout<<pagar<<endl;
}