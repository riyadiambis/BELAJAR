#include<iostream>
using namespace std;

int main(){
    int bilangan;
    cout<<"Masukkan angka = ";
    cin>>bilangan;

    if(bilangan % 2 == 1){
        cout<<"angka "<<bilangan<<" merupakan sebuah bilangan ganjil";
    } else{
        cout<<"angka "<<bilangan<<" merupakan sebuah bilangan genap";
    }
}