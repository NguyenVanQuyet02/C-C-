#include"iostream"
#include"math.h"
using namespace std;
void nhap_mang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> *(a + i);
	}
}
void in_mang(int* a, int n) {
	cout << "\nmang la" << endl;
	for (int i = 0; i < n; i++) {
		cout << "  " << *(a + i);
	}
}
int kt_snt(int n) {
	if (n < 2) {
		return 0;
	}for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}return 1;
}
int kt_so_doi_xung(int n) {
	if (n <= 10) {
		return 0;
	}
	int temp = n;
	int s = 0;
	while (n != 0) {
		s = s * 10 + n % 10;
		n /= 10;
	}
	if (temp == s) {
		return 1;
	}
	return 0;
}
void tong_so_doi_xung(int* a, int n) {
	int s = 0,d=0;
	for (int i = 0; i < n; i++) {
		if (kt_so_doi_xung(a[i])) {
			s += a[i];
			d++;
		}
	}if (d > 0) {
		cout << "\ntong cac so doi xung la : " << s << endl;
	}
	else {
		cout << "mang khong co so doi xung" << endl;
	}
}
void in_snt(int* a, int n) {
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (kt_snt(a[i])) {
			d++;
			break;
		}
	}if (d > 0) {
		cout << "cac snt la" << endl;
		for (int i = 0; i < n; i++) {
				if (kt_snt(a[i])) {
					cout << "  " << a[i];
				}
		}
	}
	else {
		cout << "mang khong co snt" << endl;
	}
	
}
void sap_xep_vt_snt(int* a, int n) {
	int temp = 0;
	for (int i = 0; i < n; i++) {
		if (kt_snt(a[i])) {
			for (int j = i + 1; j < n; j++) {
				if (kt_snt(a[j])) {
					if (a[i] > a[j]) {
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
		}
	}
}
void xoa_vt(int* a, int n, int k) {
	for (int i = k; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
}
void xoa_phan_tu_doi_xung(int*& a, int &n) {
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (kt_so_doi_xung(a[i])) {
			xoa_vt(a, n, i);
			n--;
			d++;
			i--;

			int* temp = new int[n];
			for (int i = 0; i < n; i++) {
				temp[i] = a[i];
			}
			delete[] a;
			a = new int[n];
			for (int i = 0; i < n; i++) {
				a[i] = temp[i];
			}
			delete[] temp;
		}
	}if (d > 0) {
		cout << "mang sau khi xoa phan tu doi xung la " << endl;
		in_mang(a, n);
	}
	else {
		cout << "\n mang khong co so doi xung" << endl;
	}
}
void chen_vt(int *a, int &n,int x, int k) {
	for (int i = n - 1; i >= k; i--) {
		a[i+1] = a[i];
	}
	a[k] = x;
	n++;
}
void cap_phat_lai_vung_nho(int*& a, int m, int n) {
	m = n + 1;
	int* temp = new int[n];
	for (int i = 0; i < n; i++) {
		temp[i] = a[i];
	}delete[] a;
	a = new int[m];
	for (int i = 0; i < n; i++) {
		a[i] = temp[i];
	}
	delete[] temp;
}
void them_pt_0_vao_trc_so_le(int*& a, int &n) {
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			d++;
		}
	}int m = n + d;
	if (d > 0) {
		cap_phat_lai_vung_nho(a, m, n);
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 != 0) {
				chen_vt(a, n, 0, i);
				i++;
			}
		}
		in_mang(a, n);
	}
	else {
		cout << "\n mang khong co ptu le" << endl;
	}
}
void tim_pt_le_cuoi_mang(int* a, int n) {
	int d = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] % 2 != 0){
			d++;
			break;
	    }
	}
	if (d > 0) {
		for (int i = n - 1; i >= 0; i--) {
			if (a[i] % 2 != 0) {
				cout << "pt le cuoi mang la " << a[i] << endl;
				break;
			}
		}
	}
}
void kiem_tra_mang_chan(int* a, int n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			cout << "\n day khong phai mang chan" << endl;
			exit(0);
		}
	}
	cout << "day la mang chan" << endl;
}
int main() {
	int n,k;
	do {
		cout << "nhap so phan tu cua mang ";
		cin >> n;
	} while (n <= 0);
	int* a = new int[n];
	nhap_mang(a, n);
	while (true) {
		system("cls");
		cout << endl;
		in_mang(a, n);
		cout << endl;
		cout << "\n---------- MENU ----------" << endl;
		cout << "1 - tinh tong cac so doi xung " << endl;
		cout << "2 - xuat cac so nguyen to" << endl;
		cout << "3 - sap xep tang dan chi vi tri so nguyen to " << endl;
		cout << "4 - xoa cac phan tu la so doi xung" << endl;
		cout << "5 - them phan tu 0 vao truoc cac so le" << endl;
		cout << "6 - tim gia tri le cuoi cung trong mang" << endl;
		cout << "7 - kiem tra xem mang co toan ptu chan hay khong" << endl;
		cout << "0 - thoat MENU" << endl;
		cout << "================  END  ================" << endl;
		cout << "nhap lua chon cua ban : ";
		cin >> k;
		if (k == 1) {
			tong_so_doi_xung(a, n);
			system("pause");
		}
		else if (k == 2) {
			in_snt(a, n);
			system("pause");
		}
		else if (k == 3) {
			sap_xep_vt_snt(a, n);
			in_mang(a, n);
			system("pause");
		}
		else if (k == 4) {
			xoa_phan_tu_doi_xung(a, n);
			system("pause");
		}
		else if (k == 5) {
			them_pt_0_vao_trc_so_le(a, n);
			system("pause");
		}
		else if (k == 6) {
			tim_pt_le_cuoi_mang(a, n);
			system("pause");
		}
		else if (k == 7) {
			kiem_tra_mang_chan(a, n);
			system("pause");
		}
		else if (k == 0) {
			break;
		}
	}
	
	delete[] a;
	return 0;
}