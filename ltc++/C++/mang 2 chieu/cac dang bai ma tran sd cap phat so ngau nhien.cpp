#include"iostream"
#include"cstdlib"
#include"ctime"

using namespace std;
void nhapmatran(int a[100][100],int &m,int &n){
	do{
		cout<<"nhap so dong va cot : ";
		cin>>m>>n;
	}while(m==0 || n==0);
	srand(time(NULL));// lu y
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=rand()%100+1;// luu y
		}
	}
}void inmatran(int a[][100],int m,int n){
	cout<<"ma tran la "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}void tongdong(int a[][100],int m,int n){
	int k;
	do{
		cout<<"nhap dong can tinh tong ";
		cin>>k;
	}while(k<0 || k>m-1);
	int s=0;
	for(int i=0;i<n;i++){
		s+=a[k][i];
	}
	cout<<"tong dong "<<k<<" la "<<s<<endl;
}
void tongcot(int a[][100],int m,int n){
	int k=0;
	do{
		cout<<"nhap cot can tinh tong ";
		cin>>k;
	}while(k<0 || k>n-1);
	int s=0;
	for(int i=0;i<m;i++){
		s+=a[i][k];
	}
	cout<<"tong cot "<<k<<" la "<<s<<endl;
}
int main(){
	int a[100][100],m,n;
	nhapmatran(a,m,n);
	inmatran(a,m,n);
	tongdong(a,m,n);
	tongcot(a,m,n);
	return 0;
}
