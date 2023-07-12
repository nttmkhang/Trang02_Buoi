#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Nhap(string&);
string ChuyenVeThuong(string);
string process(string);
int main()
{
	string a;
	Nhap(a);
	cout << process(a);
	return 0;
}

void Nhap(string& a)
{
	//cin.ignore();
	getline(cin, a);
}

string ChuyenVeThuong(string a)
{
	string b = "";
	for (int i = 0; i < a.size(); i++)
		if (a[i] >= 65 && a[i] <= 90)
			b.push_back(a[i] + 32);
		else
			b.push_back(a[i]);
	return b;
}

string process(string a)
{
	stringstream stream;
	stream << ChuyenVeThuong(a);
	return stream.str();
}