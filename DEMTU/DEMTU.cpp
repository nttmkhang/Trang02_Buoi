#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string SoLuongTu(string);

int main()
{
	string s;
	getline(cin, s);
	cout << SoLuongTu(s);
	return 0;
}

string SoLuongTu(string s)
{
	stringstream ss(s), stream;
	int dem = 0;
	string x;
	while (ss >> x)
		dem++;
	stream << dem;
	return stream.str();
}