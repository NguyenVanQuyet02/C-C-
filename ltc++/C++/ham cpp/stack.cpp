#include"iostream"
#include"stack"
using namespace std;
int main(){
	stack<int>dayso;
	dayso.push(5);
	dayso.push(10);
	dayso.push(20);
	cout<<"size stack "<<dayso.size()<<endl;;
	cout<<"stack co rong khong "<<dayso.empty()<<endl;
	dayso.pop();
	cout<<"\n"<<dayso.top();
	return 0;
}
