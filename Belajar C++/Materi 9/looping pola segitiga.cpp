#include<iostream>
using namespace std;

int main(){
    int jumlah;
    cout<<"Masukkan jumlah bintang = ";
    cin>>jumlah;
    jumlah -=1;
    for(int a = 0; a <= jumlah; a++){
        for(int b = 0; b < a; b++){
            cout<<"* ";
        }
        cout<<"*"<<endl;
    }
}