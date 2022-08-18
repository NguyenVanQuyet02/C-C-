#include"iostream"
using namespace std;
void nhap(int &k){
	cout<<" nhap gt k : ";
	cin>>k;
}
int ktsothuannghich(int n){
	int temp = n;
	int ndao=0;
	while(n>0){
		ndao=ndao*10 + n%10;
		n/=10;
	}if(ndao==temp){
		return 1;
	}
	return 0;
}
int tongchuso(int n,int k){
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	if(s%k == 0){
		return 1;
	}
	return 0;
}
int main(){
	int k;
	nhap(k);
	cout<<" cac so la ";
	for(int i=10000000;i<=99999999;i++){
		if(ktsothuannghich(i) && tongchuso(i,k)){
			cout<<i<<"   ";
		}
	}
	return 0;
}
