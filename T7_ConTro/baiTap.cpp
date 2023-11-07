#include<iostream>
using namespace std;

int main() {
	int* p, * q, m, n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap m: ";
	cin >> m;
	p = new int[n];
	q = new int[m];
	for (int i = 0; i < n; i++) {
		cout << "P[" << i << "]=";
		cin >> *(p + i);
	}
	for (int i = 0; i < m; i++) {
		cout << "Q[" << i << "]=";
		cin >> *(q + i);
	}
	//  In ra man hinh
	cout << "Day thu nhat la: ";
	for (int i = 0; i < n; i++) {
		cout << "\t" << *(p + i) << "\t";
	}
	cout << "\nDay thu hai la: ";
	for (int i = 0; i < m; i++) {
		cout << "\t" << *(q + i) << "\t";
	}
	//  Tinh Tong: 
	int S1 = 0, S2 = 0;
	for (int i = 0; i < n; i++) {
		if (*(p + i) % 2 == 0 && *(p + i) % 5 == 0) {
			S1 += *(p + i);
		}
	}
	for (int i = 0; i < m; i++) {
		if (*(q + i) % 2 == 0 && *(q + i) % 5 == 0) {
			S2 += *(q + i);
		}
	}
	cout << "\nTong: " << S1 + S2 << endl;
	//  Tim min, max:
	int max = *(p);
	int min = *(p + 1);
	for (int i = 0; i < n; i++) {
		if (max <= *(p + i)) {
			max = *(p + i);
		}
	}
	for (int i = 0; i < m; i++) {
		if (max <= *(q + i)) {
			max = *(q + i);
		}
	}
	cout << "Gia tri lon nhat trong hai day la: " << max << endl;
	for (int i = 0; i < n; i++) {
		if (min >= *(p + i)) {
			min = *(p + i);
		}
	}
	for (int i = 0; i < m; i++) {
		if (min >= *(q + i)) {
			min = *(q + i);
		}
	}
	cout << "Gia tri nho nhat trong hai day la: " << min << endl;
	return 0;
}

