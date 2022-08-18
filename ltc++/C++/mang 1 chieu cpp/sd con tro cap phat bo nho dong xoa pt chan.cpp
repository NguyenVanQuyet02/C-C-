#include"iostream"
#include"cstdlib"
#include"ctime"
using namespace std;
void nhapmang(int *a,int &n){
	do{
		cout<<"nhap so phan tu mang ";
		cin>>n;
	}while(n<=0);
	srand(time(NULL));
	for(int i=0;i<n;i++){
		*(a+i)=rand()%100+1;
	}
}
void inmang(int *a,int n){
	cout<<"mang la "<<endl;
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
}
void xoa(int a[],int &n,int k){
	for(int i=k;i<n;i++){
		a[i]= a[i+1];
	}
	n--;
}
void xoachan(int *a,int &n){
	int k=0,d=0;
	for(int i=n-1;i>=0;i--){
		if(*(a+i)%2==0){
			xoa(a,n,i);
			d++;
		}
	}
	if(d>0){
		inmang(a,n);
	}else{
		cout<<"mang khong co so chan"<<endl;
	}
}
int main(){
	int n;
	int *a = new int[n];
	nhapmang(a,n);
	inmang(a,n);
	cout<<endl;
	xoachan(a,n);
	// giai phong
	for(int i=0;i<n;i++){
		delete[] &a[i];
	}
	delete[] a;
	return 0;
}
