#include<iostream>
using namespace std;

int main(){
    int makanan, piring;
    string kecap, kerupuk;

    cout<<"Silahkan pilih menu makanan ini :\n1. Ikan Panggang\n2. Telur Asin\n3. Nasi Padang\n"<<endl;
    cout<<"Masukkan pilihan menu anda"<<endl;
    cin>>makanan;
    if(makanan == 1){
        cout<<"Anda perlu membayar 10.000 untuk menu ini"<<endl;
    }else if(makanan==2){
        cout<<"Anda mendapatkan free nasi, total yang perlu anda bayarkan adalah 10.000\nApakah anda ingin menambal saos kecap?"<<endl;
        cout<<"Masukkan pilihan anda (y/n) : "<<endl;
        cin>>kecap;
        if(kecap == "y"){
            cout<<"Oke anda mendapatkan kecap sehingga total belanja anda menjadi 11.000"<<endl;
        }else if(kecap == "n"){
            cout<<"Tidak menambahkan kecap, anda hanya memesan telur nasi seharga 10.000"<<endl;
        }else{
            cout<<"Karena pilihan anda tidak ada maka anda tetap memesan nasi telur saja"<<endl;
        }
        cout<<"Apakah anda ingin menambahkan kerupu? (y/n): "<<endl;
        cin>>kerupuk;
        if(kerupuk == "y"){
            cout<<"Oke terima kasih, ini adalah free yah"<<endl;
        }else{
            cout<<"Sayang sekali anda tidak mau yah padahal ini gratis, tapi tindakan anda tidak dapat ulang"<<endl;
        }
    }else if(makanan == 3){
        cout<<"Nasi padang itu mahal jadi anda harus membayar 25.000, jika ingin mendapatkan diskon anda harus mencuci piring sendiri\nApakah anda menerima tawaran kami? (1=ya, 0=tidak)"<<endl;
        cout<<"Oke saatnya menentukan pilihan anda : "<<endl;
        cin>>piring;
        if(piring == 1){
            cout<<"Oke anda hanya perlu membayarkan 10.000 karena telah mendapatkan potongan 15.000"<<endl;
        }else if(piring == 2){
            cout<<"Oke karena anda tidak ingin mencuci piring sendiri, maka anda tetap harus membayarkan 25.000"<<endl;
        }else{
            cout<<"Anda mendapatkan denda 10.000 karena ketidak ceradan anda dalam memilih pilihan\nANDA HARUS MEMBAYAR 35.000 untuk nasi padang tersebut"<<endl;
        }
    }else{
        cout<<"Makanan tidak tersedia, silahkan ulangi"<<endl;
    }

}