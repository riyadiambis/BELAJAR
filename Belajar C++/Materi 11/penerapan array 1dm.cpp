#include<iostream>
using namespace std;

int main(){
    int jumlah_item, total_harga = 0;
    cout<<"Masukkan jumlah item yang ingin di hitung = ";
    cin>>jumlah_item;
    
    int harga[jumlah_item];

    for(int a = 0; a < jumlah_item; a++){
        int b = a+1;
        cout<<"Masukkan harga ke-"<<b<<" = ";
        cin>>harga[a];
    }

    cout<<"======================================"<<endl;
    for(int y=0; y<jumlah_item; y++){
        int z = y+1;
        cout<<"harga dari produk ke-"<<z<<" = "<<harga[y]<<endl;
        total_harga += harga[y];
    }
    cout<<"======================================"<<endl;


    cout<<"Total harga menjadi Rp."<<total_harga<<endl;
}