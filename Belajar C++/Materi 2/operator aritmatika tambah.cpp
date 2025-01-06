/*
Operator merupoakan sebuah simbol yang bertujuan untuk melakukan operasi pada suatu nilai ataupun variabel
*/

#include<iostream>
using namespace std;

int main(){
    //Operator Penjumlahan
    int angka_satu = 7;
    float angkat_dua =10.5;

    cout<<"hasil penjumlahan "<<angka_satu<<" + " <<angkat_dua<<" adalah..."<<angka_satu + angkat_dua<<endl;

    cout<<"Masukin angka yang ingin dijumlahkan"<<endl;
    int a,b, hasil;
    cout<<"variabel a = ";
    cin>>a;
    cout<<"variabke b = ";
    cin>>b;
    hasil = a+b;
    cout<<"hasil dari "<<a<<" + "<<b<<" adalah "<<hasil;
    }