#include"iostream"
using namespace std;
void nhapmang(int a[],int &n){
	do{
		cout<<"nhap so phan tu cua mang ";
		cin>>n;
	}while(n<=0);
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}void inmang(int a[],int n){
	cout<<"mang "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
void chen(int a[],int &n){
	int x=0,k=0;
	cout<<"nhap gt can chen : ";
	cin>>x;
	cout<<"nhap vt can chen : ";
	cin>>k;
	n++;
	for(int i=n-1;i>=k;i--){
		a[i]=a[i-1];
	}a[k-1]=x;
}
void xoa(int a[],int &n,int k){
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
void xoasochan(int a[],int &n){
	int d=0;
	for(int i=n-1;i>=0;i--){
		if(a[i]%2==0){
			xoa(a,n,i);
			d++;
		}
	}
	if(d>0){
		inmang(a,n);
	}else{
		cout<<"mang khong co gt chan "<<endl;
	}
}

int main(){
	int *a=new int [10];
	int n,x;
	nhapmang(a,n);
	inmang(a,n);
	chen(a,n);
	inmang(a,n);
	xoasochan(a,n);
	return 0;
}
