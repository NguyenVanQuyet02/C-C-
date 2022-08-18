#include"iostream"
using namespace std;
void nhapmang(int *a,int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void inmang(int *a,int n){
	cout<<"mang la "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
}
int ktdoixung(int *a,int n){
	int d =0;
	for(int i = 0 ; i <= n/2 ; i++){
		if(a[i] != a[n - 1 - i])
			d++;
	}
	return d;
}
int main(){
	int n;
	do{
		cout<<"nhap so phan tu cua mang : ";
		cin>>n;
	}while(n<=0);
	int *a;
	a = new int[n];
	nhapmang(a,n);
	inmang(a,n);
	cout<<endl;
	int kt = ktdoixung(a,n);
	cout<<kt;
	if(kt==0)
		cout<<"mang doi xung"<<endl;
	else
		cout<<"mang khong doi xung"<<endl;
	return 0;
	
}
