// them pt 0 vao truoc so chan mang tinh.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"cstdlib"
#include"ctime"

using namespace std;
void nhap_mang(int* a, int& n) {
    cout << "nhap so phan tu cua mang ";
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        *(a + i) = rand() % 100 + 1;
    }
}
void in_mang(int* a, int n) {
    cout << "\nmang" << endl;
    for (int i = 0; i < n; i++) {
        cout << "  " << * (a + i);
    }
}
void them(int* a, int &n,int x,int k) {
    for (int i = n - 1; i >= k; i--) {
        a[i + 1] = a[i];
    }a[k] = x;
    n++;
}void them_pt_0(int* a, int &n) {
    int d = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            them(a, n, 0, i );
            d++;
            i++;
        }
    }if (d > 0) {
        cout << endl;
        in_mang(a, n);
    }
    else {
        cout << "mang khong co so chan " << endl;
    }
}
int main()
{
    int n;
    int a[30];
    nhap_mang(a, n);
    in_mang(a, n);
    them_pt_0(a, n);
    return 0;

}

