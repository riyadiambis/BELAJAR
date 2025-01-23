#include<iostream>
using namespace std;

int main(){
    float jumlah_data, nilai, jumlah_nilai, rerata;
    cout<<"Masukkan jumlah mapel = ";
    cin>>jumlah_data;

    for(int a=0; a<jumlah_data; a++){
        int b = a+1;
        cout<<"Masukkan nilai siswa yang ke-"<<b<<" = ";
        cin>>nilai;
        jumlah_nilai += nilai;
    }

    cout<<"Total semua nilai = "<<jumlah_nilai<<endl;
    rerata = jumlah_nilai/jumlah_data;
    cout<<"Rata-rata nilai siswa = "<<rerata<<endl;

    if(rerata >= 90){
        cout<<"Anda mendapatkan nilai A+";
    }else if( rerata >= 80){
        cout<<"Anda mendapatkan nilai A";
    }else if(rerata >= 70){
        cout<<"Anda mendapatkan nilai B";
    }else if(rerata >= 65){
        cout<<"Anda mendapatkan nilai C";
    }else if(rerata < 65){
        cout<<"Anda tidak naik kelas";
    }
}
