#include<iostream>
using namespace std;

int main(){
    int lenght;
    cout<<"Masukkan panjang array : ";
    cin>>lenght;

    int nilai[lenght];
    int temp;
    
    for(int x = 0; x<lenght; x++){
        cout<<"Masukkan angka ke-"<<x+1<<" = ";
        cin>>nilai[x];
    }

    for(int a=1; a<lenght; a++){
        for(int b=0; b < lenght - a; b++){
            if(nilai[b]>nilai[b+1]){
                temp = nilai[b];
                nilai[b]=nilai[b+1];
                nilai[b+1] = temp;
            }
        }
    }

    cout<<"Hasil Sorting :"<<endl;
    for(int n=0; n<lenght; n++){
        cout<<" "<<nilai[n]<<endl;
    }
}