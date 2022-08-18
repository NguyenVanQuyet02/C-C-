//class string c++
#include"iostream"
#include"string"
using namespace std;
int dem_ki_tu(char s[]) {
	for (int i = 0; ; i++) {
		if (s[i] == '\0') {
			return i;
		}
	}
}
void hoan_vi(char& x, char& y) {
	char temp = x;
	x = y;
	y = temp;
}
void dao_nguoc_chuoi(char* s, int n) {
	for (int i = 0; i < n / 2; i++) {
		hoan_vi(s[i], s[n - i - 1]);
	}
}
void sao_chep_chuoi(char* s2, char* s, int n) {
	for (int i = 0; i < n; i++) {
		s2[i] = s[i];
	}s2[n] = '\0';
}
int so_sanh_2_chuoi(char *s,char*s1){
	int n = dem_ki_tu(s);
	int m = dem_ki_tu(s1);
	int dodai = dem_ki_tu(s) < dem_ki_tu(s1) ? dem_ki_tu(s) : dem_ki_tu(s1);
	for (int i = 0; i < dodai; i++) {
		if (s[i] > s1[i]) {
			return 1;
		}
		else if (s[i] < s1[i]) {
			return -1;
		}
	}if (n > m) {
		return 1;
	}
	else if (n < m) {
		return -1;
	}
	return 0;
}
int main() {
	string ten;
	char saochep[50];
	char s[] = "nguyen";
	char s1[] = "nguyen";
	cout << "nhap ten ";
	cin.ignore();
	getline(cin,ten);
	cout << "ten ban vua nhap la " << ten << endl;
	//int n = dem_ki_tu(ten);
	//cout << "do dai ten ban vua nhap la " << n << endl;
	//sao_chep_chuoi(saochep, ten, n);
	//cout << "chuoi duoc sao chep la " << saochep << endl;
	//cout << "chuoi sau khi bi dao nguoc la ";
	//dao_nguoc_chuoi(ten, n);
	//cout << ten;

	//// so sanh
	//int kt = so_sanh_2_chuoi(s, s1);
	//cout << endl;
	//cout << "ket qua kiem tra 2 chuoi la : " << endl;
	//if (kt > 0) {
	//	cout << "chuoi s lon hon chuoi s1" << endl;
	//}
	//else if (kt < 0) {
	//	cout << "chuoi s nho hon chuoi s1 " << endl;
	//}
	//else if (kt == 0) {
	//	cout << "2 chuoi bang nhau" << endl;
	//}
	return 0;
}