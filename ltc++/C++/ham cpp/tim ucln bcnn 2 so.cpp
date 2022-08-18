#include"iostream"
using namespace std;
int timucln(int a,int b){
	int ucln;
	if(a==0 || b==0){
		ucln=a+b;
	}else{
		while(a!=b){
			if(a>b){
			   a=a-b;
		    }else if(a<b){
			   b=b-a;
		    }
		}
		ucln=a;
	}
	return ucln;
}int timbcnn(int a,int b){
	int bcnn;
	int k = a*b;
	for(int i=1;i<=k;i++){
		if(i%a==0 && i%b==0){
			bcnn=i;
			break;
		}
	}
	return bcnn;
}
int main(){
	int a,b;
	cout<<"nhap 2 so duong ";
	cin>>a>>b;
	cout<<"ucln la "<<timucln(a,b)<<endl;
	cout<<"bcnn la "<<timbcnn(a,b)<<endl;
	return 0;
}
