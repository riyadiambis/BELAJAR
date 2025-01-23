#include<iostream>
using namespace std;

int main(){
    int max, min, index;
    cout<<"Masukkan jumlah angka yang ingin di uji = ";
    cin>>index;
    int nilai[index];
    for(int a=0; a<index; a++){
        cout<<"Masukkan angka ke-"<<a+1<<" = ";
        cin>>nilai[a];
    }

    max = nilai[0];
    min = nilai[0];

    for(int a = 1; a<index; a++){
        if(nilai[a]>max){
            max = nilai[a];
        }
        if(nilai[a]<min){
            min = nilai[a];
        }
    }
    cout<<"Angka terbesar adalah "<<max<<endl;
    cout<<"Angka terkecil adalah "<<min<<endl;
}