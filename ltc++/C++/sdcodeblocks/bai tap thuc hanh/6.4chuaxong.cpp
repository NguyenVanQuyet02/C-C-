#include<bits/stdc++.h>
using namespace std;
void kiemtrahople(char s[],int n){
    if(n%2!=0){
    	cout<<"\nchuoi khong hop le"<<endl;
    	return;
	}else{
		for(int i=0;i<n/2;i++){
			if(s[i]!=40 || s[n-1-i]!= 41){
				cout<<"chuoi khong hop le"<<endl;;
				return;
			}
		}
		cout<<"\nchuoi hop le"<<endl;
	}
}
int main(){
    char s[100];
    cout<<"nhap chuoi ";
    gets(s);
    int n=strlen(s);
    cout<<"\nchuoi vua nhap la: ";
    puts(s);
    kiemtrahople(s,n);
    return 0;
}
