#include"iostream"
using namespace std;
int main() {
    int n;
    cout << "nhap n ";
    cin >> n;
    int i = 0;
    while (n != 0) {
        n /= 10;
        i++;
    }
    cout << endl;
    cout << "so cac chu so cua so vua nhap la " << i << endl;
    return 0;
}