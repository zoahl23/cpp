#include<iostream>
#include<fstream>
#include<climits> // để dùng cho min2
#include<math.h>
#define size 100
using namespace std;

int main1() {
    int n, a[size];
    ifstream finp;
    finp.open("songuyen.inp");
    if (finp.fail()) {
        cout << "Khong mo duoc file";
    }
    int i = 0;
    while (!finp.eof()) {
        finp >> n;
        a[i] = n;
        i++;
    }
    // tim min2
    int min1 = a[0];
    for (int j = 0; j < i; j++) {
        if (a[j] < min1) {
            min1 = a[j];
        }
    }
    int min2 = INT_MAX;// gán giá trị tối đa cho min2
    for (int j = 0; j < i; j++) {
        if (a[j] == min1) {
            continue;
        }
        else {
            if (a[j] < min2) {
                min2 = a[j];
            }
        }
    }
    // tinh so chinh phuong
    for (int j = 0; j < i; j++) {
        if (a[j] % 2 == 0) {
            a[j] = a[j] * 2;
        }
        else {
            a[j] = a[j] * 3;
        }
    }
    float b;
    // nhap vao file
    ofstream fout;
    fout.open("songuyen.out");
    if (fout.fail()) {
        cout << "Khong mo duoc file";
    }
    fout << i << endl;
    fout << min2 << endl;
    for (int j = 0; j < i; j++) {
        b = sqrt(a[j]);
        if (b - (int)b == 0) {
            fout << a[j] << " ";
        }
    }
    return 0;
}