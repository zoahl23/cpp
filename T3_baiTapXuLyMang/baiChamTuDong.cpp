#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream fileIn("thietbi.inp");
    int n, n1 = 0, n2 = 0, gia_tri[100], so_luong[100];
    fileIn >> n;
    while (!fileIn.eof()) {
        if (n1 < n) {
            fileIn >> gia_tri[n1];
            n1++;
        }
        else if (n2 < n) {
            fileIn >> so_luong[n2];
            n2++;
        }
    }
    int dem = 0, min = gia_tri[0];
    for (int i = 0; i < n; i++) {
        if (gia_tri[i] >= 100) dem++;
        if (gia_tri[i] < min) min = gia_tri[i];
        cout << gia_tri[i] << " ";
    } cout << endl;
    int tb_min[100], m = 0;
    for (int i = 0; i < n; i++) {
        if (gia_tri[i] == min) {
            tb_min[m] = so_luong[i];
            m++;
        }
        cout << so_luong[i] << " ";
    } cout << endl;
    cout << "Tong thiet bi co gia tri >= 100: " << dem << endl;
    cout << "Gia tri Min = " << min << endl;
    cout << "Thiet bi co gia tri min: ";
    for (int i = 0; i < m; i++) {
        cout << tb_min[i] << " ";
    } cout << endl;
}