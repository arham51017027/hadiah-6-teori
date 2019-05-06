#include <iostream.h>
#include <conio.h>

int main ()
{
 char nama [25],kode;
 int pil,jmlabelanja,totbelanja,totbayar,kembalian,harga,diskon,bayar;
    cout<<"Nama
    cin>>nama;
    cout<<endl;
    cout<<"A. Kursi  Rp. 1.000.000\n";
    cout<<"B. Meja   Rp. 2.000.000\n";
    cout<<"C. Lemari Rp. 2.500.000\n";
    cout<<"D. keluar\n";
    cout<<"Pilihan barang yang akan dibeli (A-D) :";cin>>kode;
    cout<<"Msaukkan jumlah barang yang diinginkan:";cin>>jmlahbelanja;
    switch (Kode)
{
 case 'A';
   harga=1000000;
   cout<<"Barang yang dibeli : Kursi\n";
   cout<<"Harga satuan : Rp "<<harga<<endl;
   break;

   case'B';
     harga=2000000;
     cout<<"Barang yang dibeli : Meja\n";
     cout<<"Harga satuan : Rp "<<harga<<endl;
     break;
   case 'C';
     harga=2500000;
     cout<<"Barang yang dibeli : Lemari\n";
     cout<<"Harga satuan : Rp "<<harga<<endl;
     break;
     }
     totbelanja =jmlahbelanja * harga;
     cout<<"Masukkan kode barang           :"<<Kode<<endl;
     cout<<"Total harga yang harus dibayar : Rp. "<<totbelanja <<endl;
      if (totbelanja >= 10000000)
        {diskon = totbelanja * 20/100;}
        else
        {diskon = 0;}
        cout<<"Diskon
        totbayar=totbelanja - diskon;        :Rp. "<<diskon<<endl;
        cout<<"Total yang harus dibayar      :Rp. "<<totbayar<<endl;
        cout<<"Masukkan uang pembayaran      :Rp. "; cin>>bayar;
        kembalian = bayar - totbayar;
        cout<<"Kembalian                     :Rp. "<<kembalia<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cout<<               Tet]rima Kasih       "<<endl;
        getch();}
