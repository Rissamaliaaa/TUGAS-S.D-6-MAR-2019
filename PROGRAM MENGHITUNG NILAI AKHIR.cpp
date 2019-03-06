//PROGRAM MENGHITUNG JUMLAH NILAI AKHIR MAHASISWA
// DIPROGRAM OLEH : RISA AMALIA
// PRODI / NIM : D3 MANAJEMEN INFORMATIKA / 18050623019
// MATA KULIAH : PRAKTIKUM STRUKTUR DATA
//----------------------------------------------------------------------------------------------------------------------


#include<iostream>
#include<conio.h>

using namespace std;
int main ()
{
    struct data
    {
        char nama[20];
        int nim;
        int tugas;
        int kuis;
        int mid;
        int uas;
        float nilai_akhir;
    };
	struct data mahasiswa[20];

cout <<"\t-------------------------------------------------\n";
cout <<"\t PROGRAM MENGHITUNG JUMLAH NILAI AKHIR MAHASISWA\n";
cout <<"\t-------------------------------------------------\n";
int x,y;
cout <<"\n\nMASUKKAN JUMLAH DATA MAHASISWA : " ;
cin  >>y;
cout << endl;
for(x=0;x<y;x++)
{
    cout<<"MASUKKAN NAMA MAHASISWA : ";
    cin>>mahasiswa[x].nama;
    cout<<"MASUKKAN NIM MAHASISWA  : ";
    cin>>mahasiswa[x].nim;
    cout<<"MASUKKAN NILAI TUGAS    : ";
    cin>>mahasiswa[x].tugas;
    cout<<"MASUKKAN NILAI KUIS     : ";
    cin>>mahasiswa[x].kuis;
    cout<<"MASUKKAN NILAI UTS      : ";
    cin>>mahasiswa[x].mid;
    cout<<"MASUKKAN NILAI UAS      : ";
    cin>>mahasiswa[x].uas;
    cout<<endl;
}
			cout<<endl;
			cout<<"-------------------------------------------------------------------------------\n";
			cout<<"NAMA"<<"\t"<<"NIM"<<"\t"<<"TUGAS"<<"\t"<<"KUIS"<<"\t"<<"UTS"<<"\t"<<"UAS"<<"\t"<<"NILAI AKHIR"<<"\t"<<endl;
			cout<<"-------------------------------------------------------------------------------\n";
for(x=0;x<y;x++)
{
    mahasiswa[x].nilai_akhir=(mahasiswa[x].tugas*10/100)+(mahasiswa[x].kuis*20/100)+(mahasiswa[x].mid*30/100)+(mahasiswa[x].uas*40/100);
cout<<mahasiswa[x].nama<<"\t"<<mahasiswa[x].nim<<"\t"<<mahasiswa[x].tugas<<"\t"<<mahasiswa[x].kuis<<"\t"<<mahasiswa[x].mid<<"\t"<<mahasiswa[x].uas<<"\t"<<mahasiswa[x].nilai_akhir;
 mahasiswa[x].nilai_akhir=(mahasiswa[x].tugas*10/100)+(mahasiswa[x].kuis*20/100)+(mahasiswa[x].mid*30/100)+(mahasiswa[x].uas*40/100);

								if (mahasiswa[x].nilai_akhir>=85)
    								{
    								    cout<<" (A)";
                                    }
								else if (mahasiswa[x].nilai_akhir>70)
    								{
    								    cout<<" (B)";
    								}
								else if (mahasiswa[x].nilai_akhir>55)
    								{
    								    cout<<" (C)";
    								}
								else if (mahasiswa[x].nilai_akhir>40)
    								{
    								    cout<<" (D)";
    								}
								else if (mahasiswa[x].nilai_akhir<40)
    								{
    								    cout<<" (E)";
    								}
									cout<<endl;
}
									cout<<endl;
}
