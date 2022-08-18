#include"iostream"
#include"string"
using namespace std;
//struct long nhau
//struct namsinh {
//	int day;
//	int month;
//	int year;
//};
struct sinhvien {
	string ten;
	int tuoi;
	string gioitinh;
	float diem_tb;
	//namsinh sn;
};
void nhap_sv(sinhvien &sv) {
	cin.ignore();
	cout << "nhap ten sinh vien ";
    getline(cin, sv.ten);
	cout << "nhap tuoi sinh vien ";
	cin >> sv.tuoi;
	cout << "nhap gioi tinh ";
	cin.ignore();
	getline(cin, sv.gioitinh);
	do {
		cout << "nhap diem trung binh ";
		cin >> sv.diem_tb;
	} while (sv.diem_tb < 0 || sv.diem_tb >10);
	cout << endl;
}
void in_sv(sinhvien sv) {
	cout << "ten sinh vien la " << sv.ten << endl;
	cout << "tuoi " << sv.tuoi << endl;
	cout << "gioi tinh " << sv.gioitinh << endl;
	cout << "diem trung binh " << sv.diem_tb << endl;
}
void nhap_danh_sach_sinh_vien(sinhvien ds[], int& n) {
	do {
		cout << "nhap so sinh vien ";
		cin >> n;
	} while (n < 0 || n>50);
	for (int i = 0; i < n; i++) {
		cout << "nhap sinh vien " << i + 1 << endl;
		nhap_sv(ds[i]);
	}
}
void in_danh_sach_sinh_vien(sinhvien ds[], int n) {
	cout << "\t\t============ DANH SACH SINH VIEN =============" << endl;
	for (int i = 0; i < n; i++) {
		cout << "\t======== THONG TIN =========" << endl;
		cout << "sinh vien " << i + 1 << endl;
		in_sv(ds[i]);
	}
}
void tim_sinh_vien_theo_diem_tb(sinhvien ds[], int n) {
	float x;
	cout << "nhap diem can tim ";
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (ds[i].diem_tb == x) {
			cout << endl;
			in_sv(ds[i]);
		}
	}
}
void them_sinh_vien(sinhvien ds[], int& n,sinhvien x,int k) {
	for (int i = n - 1; i >= k; i--) {
		ds[i + 1] = ds[i];
	}
	ds[k] = x;
	n++;
}
void xoa_vt(sinhvien ds[], int &n,int k) {
	for (int i = k; i < n - 1; i++) {
		ds[i - 1] = ds[i];
	}n--;
}
void xoa_sinh_vien(sinhvien ds[], int& n) {
	float x;
	int d = 0;
	cout << "nhap diem can xoa ";
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (ds[i].diem_tb == x) {
			cout << endl;
			xoa_vt(ds, n, i);
			i--;
			d++;
		}
	}
	if (d > 0) {
		cout << "\t=======DANH SACH SINH VIEN SAU KHI XOA LA " << endl;
		in_danh_sach_sinh_vien(ds, n);
	}
	else {
		cout << "nhap diem khong hop le" << endl;
	}
}

int main() {
	int n;
	sinhvien sv;
	sinhvien ds[50];
	nhap_danh_sach_sinh_vien(ds, n);
	in_danh_sach_sinh_vien(ds, n);
	tim_sinh_vien_theo_diem_tb(ds, n);
	sinhvien x;
	int k = 0;
	cout << "nhap sinh vien can them " << endl;
	nhap_sv(x);
	do {
		cout << "nhap vi tri them ";
		cin >> k;
	} while (k<0 || k>n);
	them_sinh_vien(ds, n,x,k);
	in_danh_sach_sinh_vien(ds, n);
	xoa_sinh_vien(ds, n);
	return 0;
}