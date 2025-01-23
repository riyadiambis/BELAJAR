#include<iostream>
using namespace std;

int main(){
    int nilai[]={7, 3, 5, 10, 2,8,1,6};
    int panjang = size(nilai);
    int temp;
    for(int a = 1; a<panjang; a++){
        for(int b=0; b<panjang - a; b++){
            if(nilai[b] > nilai[b+1]){
                temp = nilai[b];
                nilai[b] = nilai [b+1];
                nilai[b+1] = temp;
            }
        }
        for(int c=0; c<panjang; c++){
            cout<<nilai[c]<<" | ";
        }
    }
    cout<<"\nHasil Sorting : "<<endl;
    for(int x = 0; x<panjang; x++){
        cout<<" "<<nilai[x]<<endl;
    }
}
