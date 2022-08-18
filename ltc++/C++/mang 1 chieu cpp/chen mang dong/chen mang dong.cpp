#include"iostream"
#include"cstdlib"
#include"ctime"
using namespace std;
void nhap_mang(int* a, int n) {
	//srand(time(NULL));
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);// = rand() % 100 + 1;
	}
}
void in_mang(int* a, int n) {
	cout << "\nmang" << endl;
	for (int i = 0; i < n; i++) {
		cout << "   " << *(a + i);
	}
}
void cap_phat_lai_vung_nho(int*& a, int m,int n) {
	m = n + 1;
	int* temp = new int[n];
	for (int i = 0; i < n; i++) {
		temp[i] = a[i];
	}
	delete[] a;
	a = new int[m + 1];
	for(int i=0;i<n;i++){
		a[i] = temp[i];
	}delete[] temp;
}
int kt_snt(int n) {
	if (n < 2) {
		return 0;
	}
	for (int i = 2; i < n - 1; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
void them_vt(int *a, int &n,int k) {
	int x;
	cout << "\nnhap gt can them ";
	cin >> x;
	n++;
	for (int i = n - 1; i >= k; i--) {
		a[i] = a[i-1];
	}a[k] = x;
}
void them_pt(int *&a,int &n){
    int x = 0, k = 0;
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (kt_snt(a[i])) {
			d++;
		}
	}
	int m = n + d;
	cap_phat_lai_vung_nho(a, m, n);
	for (int i = 0; i < n; i++) {
		if (kt_snt(a[i])) {
			k = i;
			d++;
		}
	}
	if (d > 0) {
		them_vt(a, n, k);
		in_mang(a, n);
	}
	else {
		cout << "mang ban nhap khong co snt " << endl;
	}
}
int main() {
	int n;
	do {
		cout << "nhap so phan tu cua mang ";
		cin >> n;
	} while (n <= 0);
	int* a = new int[n];
	nhap_mang(a, n);
	in_mang(a, n);
	them_pt(a, n);
	delete[] a;
	return 0;
}