#include"iostream"
#include"cstdlib"
#include"ctime"

using namespace std;
void nhapmang(int *a, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		*(a+i) = rand() % 100 + 1;
	}
}
void inmang(int *a, int n) {
	cout << "\n mang la" << endl;
	for (int i = 0; i < n; i++) {
		cout << "  " << *(a + i);
	}
}
void chendaumang(int *a, int &n) {
	int x;
	cout << "\nnhap gt can chen vao dau mang ";
	cin >> x;
    n++;
	//a = new int[n];
	
	for (int i = n - 1; i > 0; i--) {
		a[i] = a[i - 1];
	}a[0] = x;
}
int main() {
	int n;
	do {
		cout << "nhap so phan tu cua mang ";
		cin >> n;
	} while (n <= 0);
	int a[30];// = new int[n];
	nhapmang(a, n);
	inmang(a, n);
	chendaumang(a, n);
	inmang(a, n);
	//delete[] a;
	return 0;
}