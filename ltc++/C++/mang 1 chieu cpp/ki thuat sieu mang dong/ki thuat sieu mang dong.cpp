#include"iostream"
using namespace std;
void nhap_mang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}
void in_mang(int* a, int n) {
	cout << "\nmang la" << endl;
	for (int i = 0; i < n; i++) {
		cout* (a + i);
	}
}
void cap_phat_lai_vung_nho(int*& a, int n1, int n) {
	int* temp = new int[n];
	for (int i = 0; i < n; i++) {
		temp[i] = a[i];
	}
	delete[] a;
	a = new int[n1];
	for (int i = 0; i < n; i++) {
		a[i] = temp[i];
	}delete[] temp;
}

int main() {
	int n, x;
	cout<<"nhap phan tu mang "


	return 0;
}