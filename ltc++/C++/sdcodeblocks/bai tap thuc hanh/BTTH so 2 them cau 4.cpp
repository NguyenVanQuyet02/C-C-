#include<bits/stdc++.h>
using namespace std;
void nhap(float &x,float &y){
	cout<<"\nnhap toa do x,y: ";
	cin>>x>>y;
}
float tinhd(float x,float y,float x1,float y1){
	return sqrt(pow(x-x1,2) + pow(y - y1,2));
}
float tinhchuvitamgiac(float x,float y,float x1,float y1,float x2,float y2){
	return tinhd(x,y,x1,y1) + tinhd(x1,y1,x2,y2) + tinhd(x,y,x2,y2);
}
int main(){
	float x1,x2,x3,y1,y2,y3;
	cout<<"\nnhap toa do diem A"<<endl;
	nhap(x1,y1);
	cout<<"\nnhap toa do diem B"<<endl;
	nhap(x2,y2);
	cout<<"\nnhap toa do diem C"<<endl;
	nhap(x3,y3);
	cout<<"\nkhoang cach A va B la "<<tinhd(x1,y1,x2,y2)<<endl;
	cout<<"\nkhoang cach A va c la "<<tinhd(x1,y1,x3,y3)<<endl;
	cout<<"\nkhoang cach B va C la "<<tinhd(x2,y2,x3,y3)<<endl;
	if(tinhd(x1,y1,x2,y2) + tinhd(x2,y2,x3,y3) >= tinhd(x1,x2,x3,y3) && tinhd(x1,y1,x2,y2) + tinhd(x1,y1,x3,y3) >= tinhd(x2,y2,x3,y3) && tinhd(x2,y2,x3,y3) + tinhd(x1,y1,x2,y2) >= tinhd(x1,y1,x2,y2)){
		cout<<"\nchu vi tam giac la "<<tinhchuvitamgiac(x1,y1,x2,y2,x3,y3)<<endl;
	}else{
		cout<<"\nkhong tao thanh mot tam giac"<<endl;
	}
	return 0;
}
