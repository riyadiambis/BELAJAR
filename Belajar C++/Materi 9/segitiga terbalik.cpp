#include<iostream>
using namespace std;

int main(){
    int unit;
    cout<<"Masukkan jumlah pagar = ";
    cin>>unit;
    int lebar = unit - 1;
    
    for(int a = 0; a< unit; a++){
        for(int b=lebar; b > a; b--){
            cout<<"#";
        }
        cout<<"#"<<endl;
    }

}