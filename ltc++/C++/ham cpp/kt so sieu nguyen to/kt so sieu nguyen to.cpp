#include"iostream"
#include"cmath"
using namespace std;
int ktsnt(int n) {
	if (n < 2) {
		return 1;
	}for (int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0){
			return 1;
		}
	}
	return 0;
}int ktssnt(int n) {
	while (n != 0) {	
		if (ktsnt(n)) {
			return 0;
		}
        n /= 10;
	}
	return 1;
}
int main() {
	int n;
	cout << "nhap vao so nguyen : ";
	cin >> n;
	if (ktssnt(n)) {
		cout << n << " la so sieu nguyen to" << endl;
	}
	else {
		cout << n << " khong la so sieu nguyen to" << endl;
	}
	system("pause");
	return 0;
}