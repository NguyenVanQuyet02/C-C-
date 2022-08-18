#include"iostream"
using namespace std;
int ktthuannghich(int n){
	int temp=n;
	int ndao=0;
	while(n>0){
		ndao =ndao*10 +n%10;
		n/=10;
	}if(ndao==temp){
		return 1;
	}return 0;
}
int demchusochan(int n){
	int d=0;
	while(n>0){
		if((n%10)%2==0){
			d++;
			
		}n/=10;
	}
	return d;
}
int demchusole(int n){
	int d=0;
	while(n>0){
		if((n%10)%2!=0){
			d++;
		}n/=10;
	}
	return d;
}
int main(){
	int n;
	do{
		cout<<"nhap so nguyen duong n : ";
		cin>>n;
	}while(n<=0);
	cout<<"so chu so chan la "<<demchusochan(n)<<endl;;
	cout<<"so chu so le la "<<demchusole(n)<<endl;;
	if(ktthuannghich(n)){
		cout<<n<<" la so thuan nghich "<<endl;
	}else{
		cout<<n<<" khong la so thuan nghich"<<endl;
	}
	return 0;
}
