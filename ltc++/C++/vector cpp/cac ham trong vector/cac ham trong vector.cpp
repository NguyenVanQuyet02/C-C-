#include"iostream"
using namespace std;
#include"vector"// khai bao thu vien de sd cac ham trong vector
void in_mang_vector(vector<int> arr) {
	cout << "mang vector la " << endl;
	for (int i = 0; i < arr.size(); i++) {//ham size() tra ve kich thuoc hien tai cua vector
		cout << arr.at(i) << "   ";//<=> arr[i], ham at() truy xuat phan tu co chi so trong vector
	}// at(index);
}
int main() {
	vector<int> arr;// khai bao mot mang so nguyen
	arr.resize(10,10);//resize(so luong phan tu ,gia tri cua cac phan tu );
	in_mang_vector(arr);
	cout << endl;
	arr.resize(5);// ham co hoac gian vector
	cout << "mang vector sau khi co lai" << endl;
	in_mang_vector(arr);
	return 0;
}