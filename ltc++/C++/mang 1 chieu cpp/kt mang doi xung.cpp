#include"iostream"
using namespace std;
void nhapmang(int *a,int &n){
	do{
		cout<<"nhap so phan tu cua mang : ";
		cin>>n;
	}while(n<=0);
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void inmang(int *a,int n){
	cout<<"mang la "<<endl;
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<"  ";
	}
}void mangB(int a[],int n,int b[] ,int &m){
	int i1=0;
	m=0;
	int i=0;
	for(i=n-1;i>=0;i--){
		b[i1]=a[i];
		i1++;
		m++;
	}
}
int ktdoixung(int a[],int n1,int b[] ,int n2){
	int kq=0;
	if(n2==n1){
		for(int i=0;i<n1;i++){
			if(a[0]==b[0]){
				int j=0;
				for(;j<n2;j++){
					if(a[i+1]!=b[j+1]){
						break;
					}
				}
				if(j==n2){
					kq=1;
				}
			}
		}
	}
	return kq;
}
int main(){
	int n,m;
	int *a = new int[n];
	int *b = new int[n];
	nhapmang(a,n);
	inmang(a,n);
	if(ktdoixung(a,n,b,m)){
		cout<<"mang doi xung"<<endl;
	}else{
		cout<<"mang khong doi xung"<<endl;
	}
	delete[] a;
	delete[] b;
	return 0;
	
}
