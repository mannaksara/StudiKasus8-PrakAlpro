#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
class array{
 public:
    void input();
    void output();
 private:
    int i;
    char tahun[20][50];
    float nilai1[4]={0,60,45,45},nilai2[4]={0,65,80,90},nilai3[4]={0,80,90,90},rata[5],jumdat,jml[5];
};

void array::input(){
        cout<<"Masukkan Jumlah Data : ";cin>>jumdat;
        for(i=1;i<=jumdat;i++){
                cout<<"Data Ke - "<<i<<endl;
                cout<<"Masukkan Tahun       : ";cin>>tahun[i];
                cout<<"Masukkan Nilai Teknik Komputer : "<<nilai1[i]<<endl;
                cout<<"Masukkan Nilai Teknik Elektro   : "<<nilai2[i]<<endl;
                cout<<"Masukkan Nilai Teknik Permesinan   : "<<nilai3[i]<<endl;
                jml[i] = nilai1[i]+nilai2[i] +nilai3[i];
                rata[i]=jml[i]/3;
        }
}

void array::output(){
  cout<<"------------------------------------------------------------------------------------------"<<endl;
	cout<<"Tahun Prodi	Teknik 		Teknik		Teknik		Rata-rata"<<endl;
	cout<<"		Komputer	Elekto		Permesinan	Kelulusan per"<<endl;
	cout<<"								Tahun dari"<<endl;
	cout<<"								semua prodi"<<endl;
cout<<"------------------------------------------------------------------------------------------"<<endl;
	for(i=1;i<=jumdat;i++){
		cout<<setw(6)<<tahun[i];
		cout<<setw(15)<<nilai1[i];
		cout<<setw(15)<<nilai2[i];
		cout<<setw(15)<<nilai3[i];
		cout<<setw(18)<<rata[i];
		cout<<endl;
	}
cout<<"Rata-rata"<<setw(12)<<(nilai1[1]+nilai1[2]+nilai1[3])/3<<setw(18)<<(nilai2[1]+nilai2[2]+nilai2[3])/3<<setw(14)<<(nilai3[1]+nilai3[2]+nilai3[3])/3<<setw(18)<<(rata[1]+rata[2]+rata[3])/3;

}
int main(){
 array x;
x.input();
x.output();
}

