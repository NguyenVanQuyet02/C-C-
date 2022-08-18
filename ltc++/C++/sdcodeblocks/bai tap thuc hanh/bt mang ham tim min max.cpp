#include<bits/stdc++.h>
using namespace std;
void nhapmang(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]" <<" = ";
		cin>>a[i];
	}
}
void inmang(int *a,int n){
	cout<<"mang la ";
	for(int i=0;i<n;i++){
		cout<<"\t"<<*(a+i);
	}
}
void timsolonnhat(int *a,int n){
	int max =a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	cout<<"\nso lon nhat la "<<max<<endl;
}
void timsonhonhat(int *a,int n){
	int min =a[0];
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	cout<<"\nso nho nhat la "<<min<<endl;
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
void sapxeptangdan(int *a,int n){
	int td;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				td = a[i];
				a[i] = a[j];
				a[j] = td;
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
void timmint2(int *a,int n){
	int d=0;
	for(int i=0;i<n;i++){
		if(a[i]!=a[0]){
			cout<<"\ngt nho thu 2 la "<<a[i]<<endl;
			d++;
			break;
		}
	}
	if(d>0){
		
	}else{
		cout<<"\nptu mang giong nhau";
	}
}
void timmaxduong(int *a,int n){
	int max,d=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			max=a[i];
			d++;
			break;
		}
	}
	if(d>0){
		cout<<"\nso duong lon nhat la ";
		for(int i=0;i<n;i++){
			if(max<a[i] && a[i]>0){
				max=a[i];
			}
		}cout<<max;
	}else{
		cout<<"\nmang khong co so duong"<<endl;
		exit(0);
	}
	
}
void timminduong(int *a,int n){
	int min,d=0;
	for(int i=0;i<n;i++){
		if(a[i]>0){
			min=a[i];
			d++;
			break;
		}
	}
	if(d>0){
		cout<<"\nso duong nho nhat la ";
		for(int i=0;i<n;i++){
		if(min>a[i] && a[i]>0){
			min=a[i];
		}
		}cout<<min;
	}else{
		cout<<"\nmang khong co so duong"<<endl;
		exit(0);
	}
	
}
void timmaxam(int *a,int n){
	int max,d=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			max=a[i];
			d++;
			break;
		}
	}
	if(d>0){
		cout<<"\nso am lon nhat la ";
		for(int i=0;i<n;i++){
			if(max<a[i] && a[i]<0){
				max=a[i];
			}
		}cout<<max;
	}else{
		cout<<"\nmang khong co so am"<<endl;
		exit(0);
	}
	
}
void timminam(int *a,int n){
	int min,d=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			min=a[i];
			d++;
			break;
		}
	}
	if(d>0){
		cout<<"\nso am nho nhat la ";
		for(int i=0;i<n;i++){
		if(min>a[i] && a[i]<0){
			min=a[i];
		}
		}cout<<min;
	}else{
		cout<<"\nmang khong co so am"<<endl;
		exit(0);
	}
	
}
void timminle(int *a,int n){
	int min,d=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			min=a[i];
			d++;
			break;
		}
	}
	if(d>0){
		cout<<"\nso le nho nhat la ";
		for(int i=0;i<n;i++){
		if(min>a[i] && a[i]%2!=0){
			min=a[i];
		}
		}cout<<min;
	}else{
		cout<<"\nmang khong co so le"<<endl;
		exit(0);
	}
	
}
void timmaxle(int *a,int n){
	int max,d=0;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			max=a[i];
			d++;
			break;
		}
	}
	if(d>0){
		cout<<"\nso le lon nhat la ";
		for(int i=0;i<n;i++){
		if(max<a[i] && a[i]%2!=0){
			max=a[i];
		}
		}cout<<max;
	}else{
		cout<<"\nmang khong co so le"<<endl;
		exit(0);
	}
	
}
void timminchan(int *a,int n){
	int min,d=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			min=a[i];
			d++;
			break;
		}
	}
	if(d>0){
		cout<<"\nso chan nho nhat la ";
		for(int i=0;i<n;i++){
		if(min>a[i] && a[i]%2==0){
			min=a[i];
		}
		}cout<<min;
	}else{
		cout<<"\nmang khong co so chan"<<endl;
		exit(0);
	}
	
}
void timmaxchan(int *a,int n){
	int max,d=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			max=a[i];
			d++;
			break;
		}
	}
	if(d>0){
		cout<<"\nso chan lon nhat la ";
		for(int i=0;i<n;i++){
		if(max<a[i] && a[i]%2==0){
			max=a[i];
		}
		}cout<<max;
	}else{
		cout<<"\nmang khong co so chan"<<endl;
		exit(0);
	}
	
}
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
void timminsnt(int *a,int n){
	int min,d=0;
	for(int i=0;i<n;i++){
		if(ktsnt(a[i])){
			min=a[i];
			d++;
			break;
		}
	}
	if(d==0){
		cout<<"\nmang khong co snt"<<endl;
	}else{
		for(int i=0;i<n;i++){
			if(ktsnt(a[i]) && min>a[i]){
				min=a[i];
			}
		}
		cout<<"\nsnt nho nhat la "<<min;
	}
}
void timmaxsnt(int *a,int n){
	int max,d=0;
	for(int i=0;i<n;i++){
		if(ktsnt(a[i])){
			max=a[i];
			d++;
			break;
		}
	}
	if(d==0){
		cout<<"\nmang khong co snt"<<endl;
	}else{
		for(int i=0;i<n;i++){
			if(ktsnt(a[i]) && max<a[i]){
				max=a[i];
			}
		}
		cout<<"\nsnt lon nhat la "<<max;
	}
}
int main(){
	int n;
	int *a = new int[n];
	do{
		cout<<"nhap so phan tu cua mang ";
		cin>>n;
	}while(n<=0);
	nhapmang(a,n);
	inmang(a,n);
	
	timsolonnhat(a,n);
	timsonhonhat(a,n);
    sapxepgiamdan(a,n);
	timmaxt2(a,n);
	sapxeptangdan(a,n);
	timmint2(a,n);
	timminduong(a,n);
	timmaxduong(a,n);
	timmaxam(a,n);
	timminam(a,n);
	timmaxle(a,n);
	timminle(a,n);
	timmaxchan(a,n);
	timminchan(a,n);
	timminsnt(a,n);
	timmaxsnt(a,n);
	delete[] a;
	return 0;
}
