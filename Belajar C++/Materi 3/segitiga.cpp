#include<iostream>
using namespace std;

int main(){
    cout<<"Menghitung luas Segitiga\n========================="<<endl;
    double alas, tinggi, luas;
    cout<<"Masukkan besar alas segitiga\t = ";
    cin>>alas;
    cout<<"Masukkan besar tinggi segitiga\t = ";
    cin>>tinggi;
    luas=0.5*alas*tinggi;
    cout<<"========================"<<endl;
    cout<<"Maka diketahui bahwa:"<<endl;
    cout<<"Alas segitiga adalah "<<alas<<endl;
    cout<<"Tinggi segiotiga adalah "<<tinggi<<endl;
    cout<<"(alas x tinggi)/2 = Luas\n"<<"("<<alas<<" x "<<tinggi<<") / 2"<<" = "<<luas<<endl;
    cout<<"========================="<<endl;
    cout<<"Maka luas segitiga yang mimiliki alas "<<alas<<" dan tinggi "<<tinggi<<" adalah "<<luas<<endl;
}