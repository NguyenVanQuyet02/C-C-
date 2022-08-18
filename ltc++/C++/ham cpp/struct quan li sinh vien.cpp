#include<iostream>
using namespace std;
struct sinhvien{
	char ten[50];
	int tuoi;
	int id;
};
void nhapsv(sinhvien &sv){
	cout<<"nhap ID :";
	cin>>sv.id;
	cout<<"nhap ten sinh vien ";
	fflush(stdin);
	gets(sv.ten);
	cout<<endl;
	cout<<"nhap tuoi ";
	cin>>sv.tuoi;
}
void insv(sinhvien sv){
	cout << setw(10) << left << sv.id<<endl;
	cout<<setw(20)<<left<<sv.ten<<endl;
	cout<<setw(10)<<right<<sv.tuoi<<endl;
}
void danhsachsinhcvien(sinhvien ds[],int &n){
	do{
		cout<<"nhap so sinh vien ";
		cin>>n;
	}while(n<=0);
	for(int i=0;i<n;i++){
		cout<<"nhap sinh vien thu "<<i<<endl;
		nhapsv(ds[i]);
		cout<<endl;
	}
}
void indanhsachsinhvien(sinhvien ds[],int n){
	cout<<"danh sach sinh vien la "<<endl;
	cout<<setw(10)<<"ID";
	cout<<setw(20)<<"Ten sv";
	cout<<setw(10)<<"Tuoi";
	setfill('-');
	for(int i=0;i<n;i++){
		insv(ds[i]);
	}
}
int main(){
	sinhvien sv;
	sinhvien ds[50];
	danhsachsinhcvien(ds,n);
	indanhsachsinhvien(ds,n);
	int n;
}
