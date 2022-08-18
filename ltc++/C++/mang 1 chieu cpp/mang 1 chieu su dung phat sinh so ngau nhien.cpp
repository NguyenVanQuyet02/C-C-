#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
	int n,a[100];
	do{
		cout<<"nhap so phan tu cua mang ";
		cin>>n;
	}while(n<=0);
	srand(time(NULL));
	for(int i=0;i<n;i++){
		a[i]=rand();
	}
	cout<<"mang la "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
