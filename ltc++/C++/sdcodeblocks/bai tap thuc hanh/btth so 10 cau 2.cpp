#include<bits/stdc++.h>
using namespace std;
void nhap(int *a,int n){
	cout<<"\n Nhap phan tu mang: "<<endl;
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
}
void xuat(int *a,int n){
	cout<<"\n Mang la: ";
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
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
void tinhToanThongKe(int *a,int n){
	int d =0;
	float s=0;
	for(int i=0;i<n;i++){
		if(*(a+i)%2==0){
			s+= *(a+i);
			d++;
		}
	}
	if(d>0){
		cout<<"\n\n TBC ptu chan = "<<s/d<<endl;
	}else{
		cout<<"\n Mang khong co phan tu chan"<<endl;
	}
	
	
	int demLe=0;
	for(int i=0;i<n;i++){
		if(*(a+i)%2!=0){
			demLe++;
		}
	}
	if(demLe>0){
		cout<<"\n trong mang co "<< demLe<<" phan tu le"<<endl;
	}else{
		cout<<"\n Mang khong co phan tu le"<<endl;
	}
	
	int demPtChiaHet3Va4=0;
	int sum =0;
	for(int i=0;i<n;i++){
		if(*(a+i)%3==0 && *(a+i)%4==0){
			sum += *(a+i);
			demPtChiaHet3Va4++;
		}
	}
	if(demPtChiaHet3Va4>0){
		cout<<"\n Tong phan tu chia het cho 3 va 4 la: "<<sum<<endl;
	}else{
		cout<<"\n Mang khong co phan tu chia het cho ca 3 va 4"<<endl;
	}
}

void xoavitrithu3(int *a,int &n){
	for(int i=2;i<n-1;i++){
		*(a+i)=*(a+i+1);
	}
	n--;
}
void chen27VaoVt4(int *a,int &n){
	for(int i = n;i>4;i--){
		*(a+i)=*(a+i-1);
	}
	*(a+4)= 27;
	n++;
}
void timDem(int *a,int n){
	int max=*a,min=*a,Duongmax,AMmin;
	int dmax=0,dmin=0,dDuongmax=0,dAMmin=0;
	for(int i=0;i<n;i++){
		if(max<*(a+i)){
			max = *(a+i);
			dmax++;
		}
	}
	for(int i=0;i<n;i++){
		if(min>*(a+i)){
			min = *(a+i);
			dmin++;
		}
	}
	for(int i=0;i<n;i++){
		if(*(a+i)>0){
			Duongmax = *(a+i);
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(*(a+i)<0){
			AMmin= *(a+i);
			break;
		}
	}
	
	for(int i=0;i<n;i++){
		if(*(a+i)>0 && Duongmax<*(a+i)){
			Duongmax = *(a+i);
			dDuongmax++;
		}
	}
	for(int i=0;i<n;i++){
		if(*(a+i)<0 && AMmin>*(a+i)){
			AMmin = *(a+i);
			dAMmin++;
		}
	}
	if(dmax>0 && dmax != n){
		cout<<"\n Phan tu lon nhat la: "<<max<<endl;
	}else{
		cout<<"\n Khong tim duoc phan tu lon nhat"<<endl;
	}
	if(dmin>0 && dmin != n){
		cout<<"\n Phan tu nho nhat la: "<<min<<endl;
	}else{
		cout<<"\n Khong tim duoc phan tu nho nhat"<<endl;
	}
	if(dDuongmax>0 ){
		cout<<"\n Phan tu duong lon nhat la: "<<Duongmax<<endl;
	}else{
		cout<<"\n Khong tim duoc phan tu duong lon nhat"<<endl;
	}
	if(dAMmin>0 && dAMmin !=n){
		cout<<"\n Phan tu am nho nhat la: "<<max<<endl;
	}else{
		cout<<"\n Khong tim duoc phan tu am nho nhat"<<endl;
	}
}
int main(){
	int n;
	do{
		cout<<"\n Nhap so phan tu mang: ";
		cin>>n;
	}while(n<=0);
	int *a = new int[n];
	nhap(a,n);
	xuat(a,n);
	sapXepTangDan(a,n);
	xuat(a,n);
	tinhToanThongKe(a,n);
	xoavitrithu3(a,n);
	cout<<"\n Mang sau khi xoa phan tu o vi tri thu 3 la:"<<endl;
	xuat(a,n);
	chen27VaoVt4(a,n);
	cout<<"\n Mang sau khi chen phan tu 27 vao vi tri 4 la:"<<endl;
	xuat(a,n);
	timDem(a,n);
	return 0;
}
