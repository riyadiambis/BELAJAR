#include<iostream>
using namespace std;
    /*
    ADA 4 Jenis Perulangan
        for 
        while
        do -while
        foreach <--- Array
    */

//Perulangan
int main(){
    int a,b;
    cout<<"Masukkan angka = ";
    cin>>a;
    cout<<"Masukkan batas = ";
    cin>>b;

    for(a; a<=b; a++){
        cout<<a<<".Saya Gembira"<<endl;
    }
}