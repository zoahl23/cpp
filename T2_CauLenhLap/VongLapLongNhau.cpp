#include<iostream>
using namespace std;

/*
	Hình minh họa, nên in theo dòng nhé, giả sử n = 5:

		j=0	j=1	j=2	j=3	j=4
	i=0	 *						Dòng i=n-1 sẽ in ra dấu *
	i=1	 *	 *					và cứ i=j sẽ in ra dấu *
	i=2	 *	 	 *
	i=3	 *	 	 	 *
	i=4	 *	 *	 *	 *	 *

		Cột j=0 sẽ in ra dấu *
*/

// Vẽ tam giác
int main6() {
	int n;
	cout << "Nhap: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j == 0 || i == n - 1 || i == j) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		} // hết cái này hết 1 dòng
		cout << endl; // nên phải xuống dòng
	}
	return 0;
}
