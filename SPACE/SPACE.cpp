#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Nhap(string[], int&);
int DemKhoangTrang(string);
string XuatSoKhoangTrang(string[], int);

int main()
{
	int n;
	string a[100];
	Nhap(a, n);
	cout << XuatSoKhoangTrang(a, n);
	return 0;
}

void Nhap(string a[], int& n)
{
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
		getline(cin, a[i]);
}

int DemKhoangTrang(string str)
{
	int dem = 0;
	for (int i = 0; i < str.size() - 1; i++)
		if (str[i] == ' ' && str[i + 1] != ' ')
			dem++;
	if (str[str.size() - 1] == ' ')
		dem++;
	return dem;
}

string XuatSoKhoangTrang(string a[], int n)
{
	stringstream stream;
	for (int i = 0; i < n; i++)
		stream << DemKhoangTrang(a[i]) << endl;
	return stream.str();
}