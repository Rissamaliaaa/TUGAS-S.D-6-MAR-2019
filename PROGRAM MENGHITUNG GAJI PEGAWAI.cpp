//PROGRAM MENGHITUNG GAJI HARIAN PEGAWAI DENGAN KETENTUAN
// DIPROGRAM OLEH : RISA AMALIA
// PRODI / NIM : D3 MANAJEMEN INFORMATIKA / 18050623019
// MATA KULIAH : PRAKTIKUM STRUKTUR DATA
//----------------------------------------------------------------------------------------------------------------------

//KETENTUAN :
//Gaji per jam = 500
//Bila jumlah jam kerja hari itu > 7 jam, maka kelebihannya dihitung lembur yang besarnya 15 x gaji per jam.

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

main(){
struct pegawai
{
        char nama[50];
        int jam , lembur , gp , gaji ;
}x;

cout << " \n\t--------------------------------------------------------------\n\t";
cout << " \n\tPROGRAM MENGHITUNG GAJI HARIAN PEGAWAI DENGAN KETENTUAN \n " << endl << endl;
cout << " \n\t--------------------------------------------------------------\n\t";
cout << " \nSILAHKAN MASUKKAN NAMA PEGAWAI  : ";
gets(x.nama);
cout << " MASUKKAN JAM KERJA PEGAWAI      : ";
cin>>x.jam;


    cout    <<  "\n NAMA PEGAWAI : " << x.nama;
    cout    <<  endl;
                            if(x.jam>7)
                {
                            x.gp=7*500;
                            x.lembur=(x.jam-7)*(15*500);
                            x.gaji=x.gp+x.lembur;

                cout << " GAJI POKOK PEGAWAI : " << x.gp;
                }
                            else
                {
                            x.lembur=0;
                            x.gaji= x.jam*500;
                }

                cout<<"\n JAM KERJA PEGAWAI      : " << x.jam;
                cout<<"\n LEMBUR                 : " << x.lembur;
                cout<<"\n GAJI TOTAL PEGAWAI     : " << x.gaji;

getch();}
