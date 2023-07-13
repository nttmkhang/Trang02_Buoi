#include <iostream>
#include <sstream>
using namespace std;

void Nhap(string&, int, char*);
int DemKyTu(string, char);
string Xuat(char*, int, string);

int main()
{
    string str;
    int n;
    char* a;
    getline(cin, str);
    cin >> n;
    a = new char[n];
    cin.ignore();
    Nhap(str, n, a);

    cout << Xuat(a, n, str);
    return 0;
}

void Nhap(string& str, int n, char* a)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int DemKyTu(string str, char ch)
{
    int dem = 0;
    for (char c : str)
        if (tolower(c) == tolower(ch))
            dem++;
    return dem;
}

string Xuat(char* a, int n, string str)
{
    stringstream stream;
    for (int i = 0; i < n; i++)
        stream << DemKyTu(str, a[i]) << endl;
    return stream.str();
}