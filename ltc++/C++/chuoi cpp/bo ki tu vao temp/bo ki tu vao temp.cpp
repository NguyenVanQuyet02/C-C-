#include"iostream"
using namespace std;
int dem_ki_tu(char* s) {
	for (int i = 0; ; i++) {
		if (s[i] == '\0') {
			return i;
		}
	}
}
void bo_ki_tu_vao_temp(char *s, char *temp) {
	int n = dem_ki_tu(s);
	int d = 0;
	char x;
	cout << "nhap ki tu x can bo vao temp ";
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (s[i] == x) {
			temp[d] = s[i];
			d++;
		}
	}
	temp[d] = '\0';
	if (d > 0) {
		cout << "chuoi temp la " << temp << endl;
	}
	else {
		cout << "chuoi khong co ki tu x" << endl;
	}
}
int main() {
	char s[50];
	char temp[50];
	cout << "nhap vao chuoi ki tu ";
	cin.getline(s, 50);
	cout << "chuoi ki tu vua nhap la " << s << endl;
	bo_ki_tu_vao_temp(s, temp);
	return 0;
}