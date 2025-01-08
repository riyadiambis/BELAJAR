#include<iostream>
using namespace std;

int main(){
    cout<<"=======================\n Menghitung Luas Lingkran\n======================"<<endl;
    double r, luas;
    const float phi=3.14;
    cout<<"Rumus Yang Digunakan\n"<<"L =  phi x r²\n"<<endl;
    cout<<"========================"<<endl;
    cout<<"Masukkan jari-jari lingkran = ";
    cin>>r;
    cout<<"Phi nilainya konstan di angka 3.14\nLangsung dilakukan perhitungan...."<<endl;
    luas = phi *(r*r);
    cout<<"========================"<<endl;
    cout<<"Sehingga luas lingkarang dengan,\nJari-jari = "<<r<<"\nAdalah..... "<<luas<<endl;

}