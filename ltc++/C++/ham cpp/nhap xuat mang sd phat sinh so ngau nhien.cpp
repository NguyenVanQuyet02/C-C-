#include"iostream"
#include"cstdlib"
#include"ctime"
using namespace std;
void nhapmang(int a[],int &n){
	do{
		cout<<"nhap so phan tu cua mang ";
		cin>>n;
	}while(n<=0);
	srand(time(NULL));
	for(int i=0;i<n;i++){
		a[i]=rand()%100+1;
	}
}
void inmang(int a[],int n){
	cout<<"mang la "<<endl;
	for(int i=0;i<n;i++){
		cout<<"\t"<<a[i];
	}
}
void saochepmang(int b[],int a[],int n){
	for(int i=0;i<n;i++){
		b[i]=a[i];
	}
}void timkiem(int a[],int n){
	int x;
	int d=0;
	cout<<"nhap gt can tim  ";
	cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			d++;
		}
	}
	if(d>0){
		cout<<"tim thay gt trong mang"<<endl;
	}else{
		cout<<"khong tim thay gt trong mang"<<endl;
	}
}void sapxepmangtangdan(int a[],int n){
	int tg;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}void them1ptu(int a[],int &n){
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
void xoa1ptu(int a[],int &n){
	int x=0;
	int k=0;
	int d=0;
	cout<<"nhap gt can xoa ";
	cin>>x;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			k=i;
			d++;
		}
	}if(d>0){
		for(int i=k;i<n-1;i++){
			a[i]=a[i+1];
		}n--;
		inmang(a,n);
	}else{
		cout<<"mang khong co gt x can xoa"<<endl;
		exit(0);
	}
}
int main(){
	int a[100],b[100],n;
	nhapmang(a,n);
	inmang(a,n);
	cout<<endl;
	saochepmang(b,a,n);
	inmang(b,n);
	cout<<endl;
	timkiem(a,n);
	cout<<endl;
	sapxepmangtangdan(a,n);
	inmang(a,n);
	cout<<endl;
	them1ptu(a,n);
	inmang(a,n);
	cout<<endl;
	xoa1ptu(a,n);
	return 0;
}
