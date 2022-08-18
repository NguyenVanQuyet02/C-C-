#include"iostream"
#include"cstdlib"
#include"ctime"
using namespace std;
void nhap_mang(int* a, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		*(a + i) = rand() % 100 + 1;
	}
}
void in_mang(int* a, int n) {
	cout << "\nmangla" << endl;
	for (int i = 0; i < n; i++) {
		cout<<"  "<< *(a + i);
	}
}
void chen_phan_tu(int *&a, int &n) {
	int* temp = new int[n];
	for (int i = 0; i < n; i++) {
		temp[i] = a[i];
	}
	delete[] a;
	a = new int[n + 1];
	for (int i = 0; i < n; i++) {
		a[i] = temp[i];
	}
	delete[] temp;

	int x = 0, k = 0;
	cout << "\nnhap gt can chen ";
	cin >> x;
	do {
		cout << "\nnhap vt can chen ";
		cin >> k;
	} while (k<0 || k>n-1);
	n++;
	for (int i = n - 1; i >= k; i--) {
		a[i] = a[i - 1];
	}a[k] = x;
}
int main() {
	int n;
	do {
		cout << "nhap so phan tu mang ";
		cin >> n;
	} while (n <= 0);
	int* a = new int[n];
	nhap_mang(a, n);
	in_mang(a, n);
	chen_phan_tu(a, n);
	in_mang(a, n);
	delete[] a;
	return 0;
}