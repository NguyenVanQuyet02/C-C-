#include"iostream"
#include"cmath"
#include"cstdlib"
#include"ctime"

using namespace std;
int ktsnt(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
void nhapmang(int *a,int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		*(a+i)= rand()%100+1;
	}
}
void inmang(int *a,int n){
	cout<<"mang"<<endl;
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<"  ";
	}
}
void tinhtbc(int a[],int n){
	int k;
	cout<<"nhap gt k : ";
	cin>>k;
	int d=0,dem=0;
	int tong = 0,tongk=0;
	float tbc=0,tbck=0;
	for(int i=0;i<n;i++){
		if(ktsnt(a[i])){
			tong+= a[i];
			d++;
		}
		if(a[i]%k==0){
			tongk+=a[i];
			dem++;
		}
	}
	if(d>0){
		tbc = (float)tong/d;
		cout<<"tbc cac snt la "<<tbc<<endl;
	}else{
		cout<<"mang khong co snt"<<endl;
	}
	if(dem>0){
		tbck=(float)tongk/dem;
		cout<<"tbc cac pt chia het cho k la "<<tbck<<endl;
	}else{
		cout<<"mang khong co pt chia het cho k"<<endl;
	}
}
int main(){
	int n;
	do{
		cout<<"nhap so pt cua mang : ";
		cin>>n;
	}while(n<=0);
	int *a = new int[n];
	nhapmang(a,n);
	inmang(a,n);
	cout<<endl;
	tinhtbc(a,n);
	delete[] a;
	return 0;
}
