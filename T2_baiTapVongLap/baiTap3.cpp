#include<iostream>
using namespace std;

/*
	In ra hình sau
		*
		* *
		*   *
		* * * * * * *
				*	* 
				  *	* 
					* 
*/

int main4() {
	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= 6; j++) {
			if (i == 3 || i==j) {
				cout << "* ";
			}
			else if (i < 3 && j == 0) {
				cout << "* ";
			}
			else if (j == 6 && i > 3) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}