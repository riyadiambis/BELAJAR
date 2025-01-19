#include<iostream>
using namespace std;

int main(){
    int jumlah_arr;
    cout<<"Masukkan jumlah index : ";
    cin>>jumlah_arr;
    string nama[jumlah_arr];

    for(int a = 0; a<jumlah_arr; a++){
        cout<<"Masukkan nilai index ke-"<<a<<" = ";
        cin>>nama[a];
    }
    cout<<"============================================\n";
    for(int b = 0; b<jumlah_arr; b++){
        cout<<"Nama index ke-"<<b<<" ialah = "<<nama[b]<<endl; 
    }
    cout<<"============================================\n";
}