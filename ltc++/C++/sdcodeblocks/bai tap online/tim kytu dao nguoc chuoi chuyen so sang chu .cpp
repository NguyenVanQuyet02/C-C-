#include<bits/stdc++.h>
using namespace std;
void dem(char *a){
	int in =0,thuong=0,so=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>=65 && a[i]<=90){
			in++;
		}
		else if(a[i]>=97 && a[i]<=122){
			thuong++;
		}
		else if(a[i]>=48 && a[i]<=57){
			so++;
		}
	}
	cout<<"\n chuoi co :"<<endl;
	cout<<"\t"<<in<<" chu cai in"<<endl;
	cout<<"\t"<<thuong<<" chu cai thuong"<<endl;
	cout<<"\t"<<so<<" chu so"<<endl;
}
void daonguocchuoi(char *a){
	int n =strlen(a);
	for(int i=0;i<n/2;i++){
		swap(a[i],a[n-i-1]);
	}
	puts(a);
}
void timkytu(char *a){
	char x;
	cout<<"\nnhap ky tu can tim: ";
	cin>>x;
	int d=0;
	for(int i=0;i<strlen(a);i++){
		if(a[i]==x){
			d++;
			cout<<"\t"<<i;
		}
	}
	if(d>0){
		cout<<" la vi tri xuat hien ky tu "<<x<<endl;
	}else{
		cout<<"\ntrong chuoi khong co ky tu "<<x<<endl;
	}
}
void ChuSangSo(char *a){
	for(int i=0;i<strlen(a);i++){
		if(a[i]=='0' || a[i]=='1' || a[i]=='2' || a[i]=='3' || a[i]=='4' || a[i]=='5' || a[i]=='6' || a[i]=='7' || a[i]=='8' || a[i]=='9'){
			switch(a[i]){
				case '0':
					cout<<" khong ";
					break;
				case '1':
					cout<<" mot ";
					break;
				case '2':
					cout<<" hai ";
					break;
				case '3':
					cout<<" ba ";
					break;
				case '4':
					cout<<" bon ";
					break;
				case '5':
					cout<<" nam ";
					break;
				case '6':
					cout<<" sau ";
					break;
				case '7':
					cout<<" bay ";
					break;
				case '8':
					cout<<" tam ";
					break;
				case '9':
					cout<<" chin ";
					break;
		    }
		}else{
			cout<<a[i];
		}
	}
}
int main(){
	char str[110];
	char str1[110];
	do{
		cout<<"\nnhap chuoi khong qua 100 ky tu:";
		gets(str);
	}while(strlen(str)>100);
	dem(str);
	cout<<"\nchuoi la: ";
	puts(str);
	cout<<"\nchuoi sau khi dao nguoc la: ";
	daonguocchuoi(str);
	daonguocchuoi(str);
	timkytu(str);
	ChuSangSo(str);
	return 0;
}
