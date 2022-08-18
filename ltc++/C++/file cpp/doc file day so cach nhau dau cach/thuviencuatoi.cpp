#include"thuviencuatoi.h"

int kiem_tra_snt(int n) {
	if (n < 2) {
		return 0;
	}for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int kiem_tra_so_hoan_hao(int n) {
	int s = 1;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	if (s == n) {
		return 1;
	}
	return 0;
}
int tinh_tong(int a, int b) {
	return a + b;
}