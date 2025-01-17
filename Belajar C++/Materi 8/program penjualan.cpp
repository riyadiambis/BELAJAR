#include<iostream>
using namespace std;

int main(){
    int roti, susu, sampo, total_harga;
    int jumlah_roti, jumlah_susu, jumlah_sampo;

    roti = 5000;
    susu = 4000;
    sampo = 500;

    cout<<"Item Tersedia\n====================================="<<endl;
    cout<<"Roti \t = "<<roti<<"\t /pcs"<<endl;
    cout<<"Susu \t = "<<susu<<"\t /pcs"<<endl;
    cout<<"Sampo \t = "<<sampo<<"\t /pcs"<<endl;
    cout<<"======================================"<<endl;

    cout<<"Masukkan jumlah roti\t : ";
    cin>>jumlah_roti;
    cout<<"Masukkan jumlah susu\t : ";
    cin>>jumlah_susu;
    cout<<"Masukkan jumlah sampo\t : ";
    cin>>jumlah_sampo;

    cout<<"======================================"<<endl;

    cout<<"Total harga Roti\t : Rp."<<roti*jumlah_roti<<endl;
    cout<<"Total harga Susu\t : Rp."<<susu*jumlah_susu<<endl;
    cout<<"Total harga Sampo\t : Rp."<<sampo*jumlah_sampo<<endl;

    cout<<"======================================"<<endl;
    cout<<"======================================"<<endl;
    cout<<"Total Harga : Rp."<<(roti*jumlah_roti)+(susu+jumlah_susu)+(sampo*jumlah_sampo)<<endl;
    cout<<"======================================"<<endl;

}