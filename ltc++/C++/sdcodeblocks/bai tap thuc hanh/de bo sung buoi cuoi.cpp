#include<bits/stdc++.h>
#include<fstream>
using namespace std;
ofstream o;
void nhap(int *a,int n){
	cout<<"\n Nhap phan tu mang: ";
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void xuat(int *a,int n){
	cout<<"\nMang la: ";
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void xuatFile(int *a,int n){
	o.open("BoSung.TXT",ios_base::out);
	o<<"\nMang la: ";
	for(int i=0;i<n;i++){
		o<<"\t"<<*(a+i);
	}
	o.close();
}
void sapXepGiamDan(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(*(a+i)<*(a+j)){
				swap(*(a+i),*(a+j));
			}
		}
	}
}
void sapXepTangDan(int *a,int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(*(a+i)>*(a+j)){
				swap(*(a+i),*(a+j));
			}
		}
	}
}
void timPhanTuLonThu2(int *a,int n){
	int max = *a,d=0;
	o.open("BoSung.TXT",ios_base::app);
	for(int i=0;i<n;i++){
		if(*(a+i)!= max){
			max = *(a+i);
			d++;
			break;
		}
	}
	if(d>0){
		cout<<"\n phan tu lon thu 2 trong day la: "<<max<<endl;
		o<<"\n phan tu lon thu 2 trong day la: "<<max<<endl;
	}else{
		cout<<"\n khong tim duoc phan tu lon thu 2 trong day so"<<endl;
		o<<"\n khong tim duoc phan tu lon thu 2 trong day so"<<endl;
	}
	o.close();
}

void timMinDuong(int *a,int n){
	int min,d=0;
	for(int i=0;i<n;i++){
		if(*(a+i)>0){
			min =*(a+i);
			d++;
			break;
		}
	}
	if (d>0){
		for(int i=0;i<n;i++){
			if(*(a+i)>0 && *(a+i)<min){
				min = *(a+i);
			}
	    }
	    cout<<"\n phan tu duong nho nhat la: "<<min<<endl;
	}else{
		cout<<"\n khong tim duoc so duong nho nhat"<<endl;
	}
}
void xoaVt(int *a,int &n,int k){
	for(int i = k;i<n;i++){
		*(a+i)=*(a+i+1);
	}
	n--;
}
void xoaAmLe(int *a,int &n){
	int d=0;
	for(int i=0;i<n;i++){
		if(*(a+i)<0 &&*(a+i)%2!=0){
			d++;
			break;
		}
	}
	if(d>0){
		for(int i=0;i<n;i++){
			if(*(a+i)<0 &&*(a+i)%2!=0){
				xoaVt(a,n,i);
				i--;
			}
		}
		cout<<"\n Mang sau khi xoa phan tu am le la: ";
	}else{
		cout<<"\n day so khong co phan tu am le"<<endl;
	}
}
int main(){
	int n;
	do{
		cout<<"\n Nhap so phan tu cua mang: ";
		cin>>n;
	}while(n<=0);
	int *a = new int[n];
	nhap(a,n);
	xuat(a,n);
	xuatFile(a,n);
	sapXepGiamDan(a,n);
	timPhanTuLonThu2(a,n);
	timMinDuong(a,n);
	sapXepTangDan(a,n);
	xoaAmLe(a,n);
	xuat(a,n);
	delete[] a;
	return 0;
}
