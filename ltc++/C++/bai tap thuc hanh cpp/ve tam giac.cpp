#include"iostream"
using namespace std;
void vetamgiacduoi(int h){
	for(int i=0;i<h;i++){
		for(int j=0;j<=i;j++){
			cout<<" * ";
		}
		cout<<endl;
	}
}
void vetamgiactren(int h){
	for(int i=0;i<h;i++){
		for(int j=0;j<h;j++){
			if(j<i){
				cout<<"   ";
			}else{
				cout<<" * ";
			}
		}
		cout<<endl;
	}
}

int main(){
	int h;
	cout<<"nhap so nguyen duong h ";
	cin>>h;
	vetamgiacduoi(h);
	cout<<endl;
	vetamgiactren(h);
	return 0;
}
