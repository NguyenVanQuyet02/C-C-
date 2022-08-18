#include"iostream"
#include"cstring"
#include"queue"
#include"cstdio"
using namespace std;
struct sinhvien{
	char ten[50];
	int tuoi;
};
void nhapsv(sinhvien &n){
	cout<<"nhap tuoi ";
	cin>>n.tuoi;
	cout<<"nhap ten ";
	fflush(stdin);
	gets(n.ten);
}
void insv(sinhvien n){
	cout<<"ten : "<<n.ten<<endl;
	cout<<"tuoi "<<n.tuoi<<endl;
}
int main(){
	sinhvien a,b,c;
	queue<sinhvien>ds;
	nhapsv(a);
	nhapsv(b);
	nhapsv(c);
	ds.push(a);
	ds.push(b);
	ds.push(c);
	insv(ds.front());
	insv(ds.back());

}
