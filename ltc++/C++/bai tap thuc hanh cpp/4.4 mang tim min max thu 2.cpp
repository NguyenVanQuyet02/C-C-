#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]" <<" = ";
		cin>>*(a+i);
	}
}
void inmang(int *a,int n){
	cout<<"mang la ";
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void sapxepgiamdan(int *a,int n){
	int gd;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				gd = a[i];
				a[i] = a[j];
				a[j] = gd;
			}
		}
	}
}

void timmaxt2(int *a,int n){
	int d=0;
	for(int i=0;i<n;i++){
		if(a[i]!=a[0]){
			cout<<"\ngt lon thu 2 la "<<a[i]<<endl;
			d++;
			break;
		}
	}
	if(d>0){
		
	}else{
		cout<<"\nptu mang giong nhau";
	}
}

int main(){
	int n;
	int *a=new int[n];
	do{
		cout<<"nhap so phan tu cua mang ";
		cin>>n;
	}while(n<=0);
	nhapmang(a,n);
	inmang(a,n);
	sapxepgiamdan(a,n);
	cout<<endl;
	timmaxt2(a,n);
	delete[] a;
	return 0;
	
}
