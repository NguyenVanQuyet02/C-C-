#include"iostream"
#include"cstdio"
#include"cstring"
using namespace std;
struct doanhnghiep{
	char madoanhnghiep[10];
	char giamdoc[20];
	float vondieule;
	int sonhanvien;
};
void nhapdoanhnghiep(doanhnghiep &x){
	cout<<"nhap ma doanh nghiep : ";
	fflush(stdin);
	gets(x.madoanhnghiep);
	cout<<"nhap ten giam doc : ";
	fflush(stdin);
	gets(x.giamdoc);
	cout<<"nhap von dieu le : ";
	cin>>x.vondieule;
	cout<<"nhap so nhan vien : ";
	cin>>x.sonhanvien;
}void indoanhnghiep(doanhnghiep x){
	cout<<"ma doanh nghiep : "<<x.madoanhnghiep<<endl;
	cout<<"ten giam doc : "<<x.giamdoc<<endl;
	cout<<"von dieu le : "<<x.vondieule<<endl;
	cout<<"so nhan vien : "<<x.sonhanvien<<endl;
}void nhapdanhsachdoanhnghiep(doanhnghiep x[],int &n){
	do{
		cout<<"nhap so doanh nghiep ";
		cin>>n;
	}while(n<=0);
	for(int i=0;i<n;i++){
		cout<<"nhap doanh nghiep thu "<<i<<endl;
		nhapdoanhnghiep(x[i]);
		cout<<"\n"<<endl;
	}
}void indanhsachdoanhnghiep(doanhnghiep x[],int n){
	cout<<"\n"<<endl;
	cout<<"danh sach doanh nghiep ";
    cout<<"\n"<<endl;		
	for(int i=0;i<n;i++){
		cout<<"doanh nghiep thu "<<i<<endl;
		indoanhnghiep(x[i]);
		cout<<"\n"<<endl;
	}
}void sapxeptangdan(doanhnghiep x[],int n){
	float tg;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(x[i].vondieule>x[j].vondieule){
				tg = x[i].vondieule;
				x[i].vondieule = x[j].vondieule;
				x[j].vondieule = tg;
			}
		}
	}
}
void inmdn(doanhnghiep ds){
	cout<<"ma doanh nghiep "<<ds.madoanhnghiep<<endl;
	cout<<"so nhan vien "<<ds.sonhanvien<<endl;
}
void inmadoanhnghiep(doanhnghiep x[],int n){
	for(int i=0;i<n;i++){
		if(x[i].sonhanvien>300 && x[i].madoanhnghiep[0]=='D' && x[i].madoanhnghiep[1]=='H'){
			inmdn(x[i]);
		}
	}
}
int kiemtradaucach(char ma[]){
	for(int i=0;i<strlen(ma);i++){
		if(ma[i]==32){
			return 1;
		}
	}
	return 0;
}
void demdnkhl(doanhnghiep x[],int n){
	int d=0;
	for(int i=0;i<n;i++){
		if(kiemtradaucach(x[i].madoanhnghiep)==1 || x[i].vondieule<10){
			d++;
		}
	}
	if(d>0){
		cout<<"so doanh nghiep khong hop le la "<<d<<endl;
	}else{
		cout<<"cac doanh nghiep deu hop le"<<endl;
	}
}
int main(){
	doanhnghiep dn;
	doanhnghiep ds[50];
	int n;
	nhapdanhsachdoanhnghiep(ds,n);
	sapxeptangdan(ds,n);
	indanhsachdoanhnghiep(ds,n);
	inmadoanhnghiep(ds,n);
	demdnkhl(ds,n);
	return 0;
}
