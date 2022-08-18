#include"iostream"
#include"string"
using namespace std;
struct nhansu{
	char hoten[50];
	char diachi[50];
	int luong;
};
void nhapns(nhansu &ns){
	cout<<"nhap ho va ten : ";
	fflush(stdin);
	gets(ns.hoten);
	cout<<"nhap dia chi : ";
	fflush(stdin);
	gets(ns.diachi);
	cout<<"nhap luong : ";
	cin>>ns.luong;
}
void inns(nhansu ns){
	cout<<"ho ten : "<<ns.hoten<<endl;
	cout<<"dia chi : "<<ns.diachi<<endl;
	cout<<"luong : "<<ns.luong<<endl;
}
void nhapdsns(nhansu ds[],int &n){
	do{
		cout<<"nhap so nhan su : ";
		cin>>n;
	}while(n<=0);
	for(int i=0;i<n;i++){
		cout<<"nhap nhan su "<<i<<endl;
		nhapns(ds[i]);
	}
}void indsns(nhansu ds[],int n){
	cout<<endl;
	cout<<"so nhan su vua nhap la :"<<endl;
	for(int i=0;i<n;i++){
		inns(ds[i]);
		cout<<endl;
	}
}
void tinhtongluong(nhansu ds[],int n){
	int s=0;
	for(int i=0;i<n;i++){
		s+=ds[i].luong;
	}
	cout<<endl;
	cout<<"tong luong nhan su la : "<<s<<endl;
}
int main(){
	nhansu ns;
	nhansu ds[50];
	int n;
	nhapdsns(ds,n);
	indsns(ds,n);
	tinhtongluong(ds,n);
	return 0;
}
