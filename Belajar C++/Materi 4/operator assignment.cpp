#include<iostream>
using namespace std;

int main(){
    int bill = 10;
    string pagar(70, '=');
    cout<<pagar<<endl;

    cout<<"bill awal = "<<bill<<endl;

    //operator assignment
    // bill = bill + 5;

    bill += 5;
    cout<<"bill + 5 = "<<bill<<endl;

    bill -= 5;
    cout<<"bill - 5 = "<<bill<<endl;

    bill *= 5;
    cout<<"bill * 5 = "<<bill<<endl;

    bill /= 5;
    cout<<"bill / 5 = "<<bill<<endl;

    bill %= 5;
    cout<<"bill % 5 = "<<bill<<endl;

    string tambah(70, '+');
    cout<<tambah<<endl;



}