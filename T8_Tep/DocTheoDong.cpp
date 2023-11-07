#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // Create a text string, which is used to output the text file
    string myText;
    string a[100];
    string heloo = "xinchao\"cac\"ban"; // muon dat dau "" trong chuoi thi phai dung \' or \" or \\ or   \n   or   \t
    int i = 0;

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText)) {
        // Output the text from the file
        a[i] = myText;
        i++;
    }
    cout << a[1] << endl;
    cout << a[2] << endl;
    cout << a[0] << endl;
    cout << a[3] << endl;
    cout << a[1][0]; // Hien thi ki tu 0 trong chuoi string
    // Close the file
    MyReadFile.close();

    // Kiem tra do dai cua chuoi, dung a[0].length() hoac a[0].size() deu dc
    // Thay doi ki tu cua chuoi    a[1][0] = 'z'    chi sd dau nhay don thui nha

    // Do cin coi khoang trang, tab la ket thuc nen se khong nhap dc, phai dung getline   getline(cin,heloo);
}