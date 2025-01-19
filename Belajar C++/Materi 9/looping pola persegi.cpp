#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Masukkan baris = ";
    cin>>a;
    cout<<"Masukkan kolom = ";
    cin>>b;

    for(int c = 1; c <= a; c++){
        for(int d = 1; d<b; d++){
            cout<<"* ";
        }
        cout<<"*"<<endl;
    }
}