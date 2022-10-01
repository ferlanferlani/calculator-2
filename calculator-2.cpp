
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main () {
    
 int pilihan, satu, dua;

 cout<<"--------------------------------"<<endl;
 cout<<"Selamat Di Kalkulator Sederhana"<<endl;
 cout<<"--------------------------------"<<endl<<endl;
 cout<<"Silahkan Pilih menu berikut ini :"<<endl<<endl;
 cout<<"1. Penjumlahan"<<endl;
 cout<<"2. Pengurangan"<<endl;
 cout<<"3. Perkalian"<<endl;
 cout<<"4. Pembagian"<<endl<<endl;
 cout<<"Masukkan Pilihan anda :  ";
 cin>>pilihan;
 cout<<endl<<endl;

system ("cls");
 
 switch(pilihan) {
   case 1:
   cout<<"**********************"<<endl;
   cout<<"      PENJUMLAHAN"<<endl;
   cout<<"**********************"<<endl<<endl;
   cout<<"Nilai Pertama = ";
   cin>>satu;
   cout<<endl;
   cout<<"Nilai Kedua   = ";
   cin>>dua;
   cout<<endl<<endl;
   cout<<"**********************"<<endl;
   cout<<"Hasil dari  "<<satu<<"+"<<dua<<" = "<< satu + dua<<endl;
   cout<<"**********************"<<endl;
   break;
   
   case 2:
   cout<<"**********************"<<endl;
   cout<<"      PENGURANGAN"<<endl;
   cout<<"**********************"<<endl<<endl;
   cout<<"Nilai Pertama = ";
   cin>>satu;
   cout<<endl;
   cout<<"Nilai Kedua   = ";
   cin>>dua;
   cout<<endl<<endl;
   cout<<"**********************"<<endl;
   cout<<"Hasil dari  "<<satu<<"-"<<dua<<" = "<< satu - dua<<endl;
   cout<<"**********************"<<endl;
   break;
   
   case 3:
   cout<<"**********************"<<endl;
   cout<<"      PERKALIAN"<<endl;
   cout<<"**********************"<<endl<<endl;
   cout<<"Nilai Pertama = ";
   cin>>satu;
   cout<<endl;
   cout<<"Nilai Kedua   = ";
   cin>>dua;
   cout<<endl<<endl;
   cout<<"**********************"<<endl;
   cout<<"Hasil dari  "<<satu<<"X"<<dua<<" = "<< satu * dua<<endl;
   cout<<"**********************"<<endl;
   break;
   
   case 4:
   cout<<"**********************"<<endl;
   cout<<"      PEMBAGIAN"<<endl;
   cout<<"**********************"<<endl<<endl;
   cout<<"Nilai Pertama = ";
   cin>>satu;
   cout<<endl;
   cout<<"Nilai Kedua   = ";
   cin>>dua;
   cout<<endl<<endl;
   cout<<"**********************"<<endl;
   cout<<"Hasil dari  "<<satu<<"/"<<dua<<" = "<< satu / dua<<endl;
   cout<<"**********************"<<endl;
   break;
   
  default:
   cout<<"************************************"<<endl;
   cout<<"Maaf nilai yang anda masukkan salah"<<endl;
   cout<<"       Silahkan ulangi lagi"<<endl;
   cout<<"*************************************"<<endl<<endl;
   
   
    
  }
}
