#include<iostream>
#include<string>
using namespace std;
int main() {
	// khai bao chuoi
	string s = "lap trinh";
	string str;
	string str1;
	int tuoi;
	cout << "nhap tuoi ";
	cin >> tuoi;
	cout << endl;
	// xoa xuong dong
	cin.ignore(32767, '\n');
	//nhap chuoi
	cout << "nhap chuoi ";
	getline(cin, str);
	cout << endl;
	cout << "tuoi la " << tuoi << endl;
	// xuat chuoi
	cout << "chuoi la ";
	cout << str;
	//nhap chuoi van ban
	cout << "nhap van ban ";
	getline(cin, str1, '_');
	cout << "van ban la " << str1 << endl;
	// cong 2 chuoi
	string a = "NGUYEN VAN ";
	string b = " QUYET";
	string c = a + b;
	cout << endl;
	cout << c << endl;
	a += "QUYET";
	cout << a << endl;
	// tim do dai chuoi
	string ten = "NGUYEN VAN QUYET";
	cout << ten << " co " << ten.length() << " ki tu" << endl;
	cout << ten << " co " << ten.size() << " ki tu" << endl;
	// ham xoa vi tri
	s.erase(s.begin() + 2);
	cout << "chuoi sau khi xoa la " << s << endl;
	// ham them vi tri
	s.insert(s.begin() + 2, 'p');
	cout << "chuoi sau khi them la " << s << endl;
	// ham them ki tu vao cuoi chuoi
	s.push_back('Q');
	cout << "chuoi sau khi them ki tu vao cuoi la " << s << endl;
	return 0;
}