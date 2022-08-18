#include"iostream"
using namespace std;
int main(){
	int m,n;
	do{
		cout<<" nhap so dong cua ma tran ";
		cin>>m;
		cout<<"nhap so cot cua ma tran ";
		cin>>n;
	}while(m<=0 || n<=0);
	// cap phat dong cho ma tran
	int **a=new int*[n];// luu y con tro tro den con tro
	for(int i=0;i<m;i++){
		a[i]=new int[n];
	}
	// thao tac voi ma tran
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl;
	cout<<"ma tran la "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	// giai phong vung nho tung phan tu ma tran
	for(int i=0;i<m;i++){
		delete[] a[i];
	}
	// giai phong vung nho ma tran
	delete[] a;
	
	return 0;
}
