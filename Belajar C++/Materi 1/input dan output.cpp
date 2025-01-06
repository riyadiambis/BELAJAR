#include <iostream>
using namespace std;

int Fungsi_A(){
    int nomor_absen = 74;
    string nama = "Rahmat Riyadi";

//Ini adalah cara kita menampilkan variabel satu persatu
    cout<<"Ini adalah cara biasa"<<endl;
    cout<<"Nama saya adalah "<<nama<<endl;
    cout<<"Nomor absen saya adalah"<<nomor_absen<<endl;

    //Spasi
    cout<<" "<<endl;

//Sementara ini adalah cara kita dengan menggunkan satu baris kode
    cout<<"Ini adalah cara menghemeat baris"<<endl;
    cout<<nama<<" adalah seorang mahasiswa dengan absen "<<nomor_absen<<endl;
    return 0;
}

int Fungsi_B(){
    string aktivitas = "makan";
    string tempat = " warung";

    cout<<"Saya sedang "<<aktivitas<<" di "<<tempat<<endl;
    return 0;
}

int main(){
    Fungsi_A();
    Fungsi_B();
    return 0;
}