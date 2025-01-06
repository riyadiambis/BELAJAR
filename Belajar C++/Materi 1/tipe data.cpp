#include<iostream>
using namespace std;


    //TIPE DATA
/*
string --> menuliskan kalimat
integer --> bilangan bulat
floating point --> bilangan pencahan/desimal 
double floating point --> menyimpan bilangan pecahan/desimal 
char --> karakter terbatas -- 1 huruf
bool --> kondisi True or False
*/

    //PERBEDAAN KEDUAN FLOAT
/*
floating point maupun double floating point keduanya menyimpan tipe data yang sama dan fungsi generalnya juga sama. floating menyimpan data float dalam 32 bit sementara double menyimpan float dalam 64 bit, sehingga keduanya digunakan dalam situasi berbeda. Double floating lebih presisi namun kekurangannya pasti akan cukup berat bagi perangkat yang menjalankannya.
*/

    //FORMAT PENULISAN
/*========================================
tipe_data nama_variabel = value_variabel;
========================================*/


int main(){
    //Menampilkan tipe data
    cout<<"5+2"<<endl; 
    cout<<5+2<<endl; 
    cout<<"============="<<endl;


    //Membuat variabbel yang memiliki nilai
    string nama_saya = "Rahmat Riyadi";
    int nomor_kesukaan = 12;
    float nomor_float = 9.8;
    double nomor_double = 9.80674;
    char karakter = 'A';
    bool bolean = false;
            //variabel tidak boleh diawali dengan angka serta spasi harus menggunakan gari bawah


    //Memanggil Variabel yang telah dibuat
    cout<<"Nama saya : "<<nama_saya<<endl;
    cout<<"Nomor kesukaan saya adalah..."<<nomor_kesukaan<<endl;
    cout<<"Percepatan gravitasi : "<<nomor_float<<endl;
    cout<<"Percepatan gravitasi sesungguhnya : "<<nomor_double<<endl;
    cout<<"Huruf awalan : "<<karakter<<endl;
    cout<<"Apakah aku perempuan : "<<bolean<<endl;
}