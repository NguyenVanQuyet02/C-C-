#include"iostream"
#include"math.h"
#include"cstdlib"
#include"ctime"
using namespace std;
void nhapmang(int* a, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		*(a + i) = rand() % 100 + 1;
	}
}
void inmang(int* a, int n) {
	cout << "\nmang la " << endl;
	for (int i = 0; i < n; i++) {
		cout << "  " << *(a + i);
	}
}
void tim_gt_xa_x_nhat(int *a,int n,int x){
	int k=0;
	int max = abs(a[0] - x);
	for (int i = 1; i < n; i++) {
		if (max < abs(a[i] - x)) {
			max = abs(a[i] - x);
			k = i;
		}
	}
	cout << "\ngia tri xa x nhat la " << a[k] << endl;
}
void tim_gt_gan_x_nhat(int* a, int n,int x) {
	int k=0;
	int min = abs(a[0] - x);
	for (int i = 1; i < n; i++) {
		if (min > abs(a[i] - x)) {
			min = abs(a[i] - x);
			k = i;
		}
	}
	cout << "\ngt gan x nhat la " << a[k] << endl;
}
int main() {
	int n;
	do {
		cout << "nhap so phan tu cua mang ";
		cin >> n;
	} while (n <= 0);
	int* a = new int[n];
	nhapmang(a, n);
	inmang(a, n);
	int x;
	cout << "\n nhap gt x ";
	cin >> x;
	tim_gt_xa_x_nhat(a, n,x);
	tim_gt_gan_x_nhat(a, n,x);
	delete[] a;
	return 0;
}