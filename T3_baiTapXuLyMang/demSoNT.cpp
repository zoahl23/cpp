#include<iostream>
#include<math.h>
#define size 100
using namespace std;

bool soNT(int m);

int main6() {
	int n, m, a[size];
	int dem=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (soNT(a[i])==true) {
			dem++;
		}
	}
	cout << dem;
	return 0;
}

bool soNT(int m) {
	if (m < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(m); i++) {
		if (m % i == 0) {
			return false;
		}
	}
	return true;
}