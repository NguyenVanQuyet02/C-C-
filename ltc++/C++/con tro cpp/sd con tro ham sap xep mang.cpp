#include"iostream"
using namespace std;
void temp(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
bool tang(int a,int b){
	return a>b;
}
bool giam(int a,int b){
	return a<b;
}
void sapxep(int *a,int n,bool(*ptr)(int,int)){
	int tem;
	for(int i=0;i<n;i++){
		tem = i;
		for(int j=i+1;j<n;j++){
			if((ptr)(a[tem],a[j])){
				tem = j;
			}
		
		}temp(a[tem] , a[i]);
	}
	
} void inmang(int *a,int n){
	cout<<"mang "<<endl;
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
}
int main(){
	int a[] = {3,6,2,8,4,9,1};
	int n = sizeof(a)/ sizeof(int);
	
	sapxep(a,n,tang);
	inmang(a,n);
	
	cout<<endl;
	sapxep(a,n,giam);
	inmang(a,n);
	
}
