#include<iostream>
using namespace std;

int main(){
    int rata_rata, jumlah_index, total;
    cout<<"Masukkan jumlah Data = ";
    cin>>jumlah_index;

    int array[jumlah_index];

    for(int a=0; a<jumlah_index; a++){
        int b = a+1;
        cout<<"Masukkan nilai data ke-"<<b<<" = ";
        cin>>array[a];
        total += array[a];
    }
    cout<<"Total data ="<<total<<endl;
    rata_rata = total/jumlah_index;
    cout<<"Rata-rata = "<<rata_rata<<endl;
}