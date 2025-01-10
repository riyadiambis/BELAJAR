#include<iostream>
using namespace std;

int main(){
    int pil;
    cout<<"Pilih salah satu di bawah ini\n1. Laki-Laki\n2.Perempuan"<<endl;
    cout<<"Masukkan pilihan anda = ";
    cin>>pil;

    if(pil == 1){
        cout<<"Kamu masuk kelompok laki-laki"<<endl;
    }else if(pil == 2){
        cout<<"Kamu masuk kelompok perempuan"<<endl;
    }else{
        cout<<"Pilihan tidak ada, silahkan masukkan pilihan lain"<<endl;
    }
}