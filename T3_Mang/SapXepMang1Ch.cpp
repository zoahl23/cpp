#include<iostream>
#include<time.h>      //Hai thư viện này để tạo số ngẫu
#include<stdlib.h>   //nhiên
using namespace std;

/*
	Sắp xếp mảng theo thức tự tăng dần
*/

/*
	Cách thức hoạt động của vòng for sắp xếp nha:

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (M[i] > M[j]) {  
				int tajm = M[i];   
				M[i] = M[j];      
				M[j] = tajm;     
			}

		}
	}

	coi như n=3 và M[]={93, 34, 40}
	For 1:
		i=0;i<n-1 TRUE; làm For 2;
			For 2:
			j=i+1=1;j<n TRUE;
				if: M[i]>M[j] <=> M[0]>M[1] <=> TRUE; 
				sẽ phải hoán đổi i, j; {34, 93, 40}
			j++=2;j<n TRUE;
				if: M[i]>M[j] <=> M[0]>M[2] <=> FALSE;
			j++=3;j<n FALSE;exit For2
		i++=1;j<n-1 TRUE; làm For 2;
			For 2:
			j=i+1=2;j<n TRUE;
				if: M[i]>M[j] <=> M[1]>M[2] <=> TRUE; 
				sẽ phải hoán đổi i, j; {34, 40, 93}
			j++=3;j<n FALSE;exit For2
		i++=2;j<n-1 FALSE
*/

#define n 5

int main5() {
	srand(time(NULL)); //cái này để tạo số ngẫu nhiên
	int M[n];
	for (int i = 0; i < n; i++) {
		M[i] = rand() % 100; // tạo số ngẫu nhiên
	}
	cout << "Mang sau khi nhap ngau nhien: \n";
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}

	// tăng dần
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (M[i] > M[j]) {  // nếu số trước lớn hơn số sau
				int tajm = M[i];   // có nghĩa là gán i cho biến tạm
				M[i] = M[j];      // cho nó bằng nhau
				M[j] = tajm;     // rồi đổi chỗ cho nó
			}
			
		}
	}
	cout << "\nMang sap xep theo thu tu tang dan: ";
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}

	// giảm dần
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (M[i] < M[j]) { // thay mỗi chỗ này
				int tajm = M[i];   
				M[i] = M[j];      
				M[j] = tajm;     
			}

		}
	}
	cout << "\nMang sap xep theo thu tu giam dan: ";
	for (int i = 0; i < n; i++) {
		cout << M[i] << "\t";
	}
	return 0;
}