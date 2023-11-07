#include<iostream>
using namespace std;

/*
	viết chương trình nhập vào 1 dãy n số thực a[0], 
	a[1],...,a[n-1], sắp xếp dãy số theo thứ tự giảm
	dần
*/

#define n 5

int main1() {
	/*int n;   Visual ko cho nhập ptu mảng huhu
	cin >> n;*/
	double M[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap gtri ptu thu " << i << ": ";
		cin >> M[i];
	}
	cout << "Mang sau khi nhap: \n";
	int i = 0;
	do {
		cout << M[i] << "\t";
		i++;
	} while (i < n);
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (M[i] < M[j]) {
				double tam;
				tam = M[i];
				M[i] = M[j];
				M[j] = tam;
			}
		}
	}
	cout << "\nMang xep giam dan: \n";
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}
	return 0;
}