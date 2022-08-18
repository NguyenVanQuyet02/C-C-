#include"iostream"
using namespace std;
int tongchuso(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}
void phantichthuasonguyento(int n){
	int i=2;
	while(n!=1){
		if(n%i==0){
			cout<<i;
			if(n!=i){
				cout<<" x ";
			}else{
				cout<<endl;
			}
			n/=i;
		}else{
			i++;
		}
	}
}int main(){
	int n;
	do{
		cout<<"nhap so duong n : ";
	    cin>>n;
	}while(n<=0);
	cout<<"tong cac chu so la "<<tongchuso(n)<<endl;
	phantichthuasonguyento(n);
	return 0;
	
}
