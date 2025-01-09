#include<iostream>
using namespace std;

int main(){
    int x, y;
    bool kondisi;
    string hasil;

    cout<<"Masukkan nilai x = ";
    cin>>x;
    cout<<"Masukkan nilai y = ";
    cin>>y;

    cout<<"Dari nilai tersebut\n";
    cout<<"Nilai x = "<<x<<endl;
    cout<<"Nilai y = "<<y<<endl;
    cout<<"\nDapat Kita Simpulkan bahawa....\n\n";

//Operasi [==]
    kondisi = x == y;
    hasil = kondisi == 1? " Setara ":" Tidak Setara ";
    cout<<"Jadi nilai x "<<hasil<<" nilai y\n"<<endl;

//Opersasi [!=]
    kondisi = x != y;
    hasil = kondisi ==1? "Tidak Sama":"Sama";
    cout<<"Jadi nilai x "<<hasil<<" dengan nilai y\n"<<endl;

//Operasi [>]
    kondisi = x > y;
    hasil = kondisi == 1? "Memang Lebih Dari":"Tidak Lebih Dari";
    cout<<"Jadi nilai x "<<hasil<<" nilai y"<<endl;

//Operasi [<]
    kondisi = x < y;
    hasil = kondisi == 0? "Lebih dari":"kurang dari";
    cout<<"Memang nilai x "<<hasil<< " nilai y"<<endl;

//Operasi [>=]
    kondisi = x >= y;
    hasil = kondisi == 1? "lebih dari atau sama dengan":"kurnag dari atau sama dengan";
    cout<<"nilai x "<<hasil<<" nilai y"<<endl;

//Operasi [<=]
    kondisi = x <= y;
    hasil = kondisi == 1? "Mememang kurang dari atau sama":"tidak kurang dari atau sama";
    cout<<"Angka x "<<hasil<<" dengan angka y";
}