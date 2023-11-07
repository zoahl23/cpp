#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
	int dem = 0;
	string s = "ten  toi la     ban  oi";
	stringstream ss(s);
	string tmp;
	string res = "";
	/*while (ss >> tmp) {
		res += tmp;
		res += ' ';
		dem++;
	}
	cout << res << endl << dem;*/

	/**/
	while (ss >> tmp) {
		res += toupper(tmp[0]);
		for (int i = 1; i < tmp.length(); i++) {
			res += tolower(tmp[i]);
		}
		res += " "; // Dau cach cuoi moi tu
	}
	// Du dau cach o cuoi, xoa dau do
	res.erase(res.length() - 1);
	s = res;

	cout << s << endl;
	return 0;
}