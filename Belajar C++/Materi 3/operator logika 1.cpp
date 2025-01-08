#include<iostream>
using namespace std;

int main(){
    int a, b;
    bool hasil;
    cout<<"Masukkan nilai ujian siswa = ";
    cin>>a;
    b = 6; //kkm

    hasil = a > b;

    string kondisi = hasil == 1?"Lulus":"Gagal";

    cout<<"Hasil = "<<kondisi;


}