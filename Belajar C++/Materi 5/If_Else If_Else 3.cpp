#include<iostream>
using namespace std;

int main(){
    int pilihan, usia;
    cout<<"Silahkan Pilih Salah Satu: \n1. Laki-laki\n2. Perempuan\n"<<endl;
    cout<<"Pilihan : "<<endl;
    cin>>pilihan;
    cout<<"Masukkan Usia Anda : "<<endl;
    cin>>usia;
    if(pilihan == 1){
        cout<<"Anda adalah seorang Laki-laki berusia "<<usia<<" tahun"<<endl;
        if(usia < 15){
            cout<<"Kamu harus memaksimalkan potensi usiamu ini untuk ekploasi nak, kamu harus banyak eksplorasi diri\n";
        }else if(usia < 22){
            cout<<"Ini adalah usia emas untukmu bung, jangan pikirkan tentang wanita dan fokuslah untuk melakukan hal yang kamu sukai dan eksplorasi untuk masa depanmu\n";
        }else if(usia < 28){
            cout<<"Ini adalah usia yang bagus untuk mengejar kesuksesan, dan kamu pasti mulai merasa sendirikan. Tak ada salahnya untuk sesekali ke event WIBU untuk mencari Loli\n";
        }else if(usia > 28 and usia < 50){
            cout<<"Benar kamu adalah laki-laki sih, tapi dengan usia "<<usia<<" tidak baik untuk terus sendiri\n";
        }else{
            cout<<"Sepertinya ada yang salah dengan usia yang kamu masukkan deh, atau mungkin kamu bukan target kami karena sudah terlalu tua\n";
        }
    }else if(pilihan == 2){
        cout<<"Anda adalah seorang Perempuan berusia "<<usia<<" tahun\n";
        if (usia < 13){
            cout<<"Anda masih terlalu lucu dan imut hehhe\n";
        }else if(usia < 19){
            cout<<"Sudah sewajarnya kamu penasaran dan mulai membenahi diri karena itu wajar kok, sudah hampir waktunya yah dan kamupun terlihat semakin lucu\n";
        }else if(usia <= 24){
            cout<<"Memang ini adalah waktunya untuk eksplorasi tetapi kamu harus memikirkan juga tentang itu yah, semangat... up up\n";
        }else if(usia < 30){
            cout<<"Sepertinya sudah waktunya untuk anda menikah deh\ndi usia "<<usia<<" sebaiknya anda segera cari jodoh ya\n";
        }else if(usia > 30 and usia <= 50){
            cout<<"Hei jangan jomblo mulu, pokoknya kamu tidak boleh sendiri selama hidupmu!\n";
        }else{
            cout<<"Usia yang kamu masukkan mungkin salah, atau program ini sudah tidak relevan dengan usia anda!\n";
        }
    }
}