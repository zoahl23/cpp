#include<iostream>
#include<fstream>
#include<string>
#define size 100

using namespace std;

struct matHang {
	string ten, sx;
	int sl, gb;
};

int main(){
	int n;
	int demdt = 0, demsx = 0;
	matHang a[size];
	ifstream finp;
	finp.open("mathang.inp");
	if (finp.fail ()) {
		cout << "Khong mo duoc file!";
	}
	while (!finp.eof()) {
		finp >> n;
		for (int i = 0; i < n; i++) {
			finp.ignore();
			getline(finp, a[i].ten);
			getline(finp, a[i].sx);
			finp >> a[i].sl;
			finp >> a[i].gb;
		}
	}
	for (int i = 0; i < n; i++) {
		if ((a[i].sl * a[i].gb) > 1000) {
			demdt++;
		}
		if (a[i].sx == "Viet Nam") {
			demsx++;
		}
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++){
			if(a[i].gb < a[j].gb){
				swap(a[i], a[j]);
			}
		}
	}
	finp.close();
	ofstream fout;
	fout.open("mathang.out");
	if(fout.fail()){
		cout << "Khong mo duoc file!";
	}
	fout << demdt << endl << demsx << endl;
	for (int i = 0; i < n; i++) {
		fout << a[i].ten << endl;
	}
	fout.close();
	return 0;
}
