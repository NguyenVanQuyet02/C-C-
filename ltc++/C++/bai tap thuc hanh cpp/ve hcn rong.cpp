#include"iostream"
using namespace std;
void nhap(int &x,int &y){
	cout<<" nhap 2 gt duong x va y ";
	cin>>x>>y;
}void vehcn(int x,int y){
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			if(i==0 || i == y-1 || j==0 || j==x-1){
				cout<<" * ";
			}else{
				cout<<"   ";
			}
		}
		cout<<endl;
	}
}
int main(){
	int x,y;
	nhap(x,y);
	vehcn(x,y);
	return 0;
}
