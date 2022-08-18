#include"iostream"
#include"cstdlib"
#include"ctime"
//#include"random"
using namespace std;
int main(){
	// lay tg thuc tu may tinh
	srand(time(NULL));
	int a = rand()%1000+1;
	cout<<a<<endl;
	// c11
	/*random_device rd;
	//mt19937 // 32 bit
	//nt19937_64 // 64 bit
	mt19937 rng(rd());
	uniform_int_distribution<int> uni(1,1000);
	auto n = uni(rng);
	cout<<n<<endl;*/
	return 0;
}
