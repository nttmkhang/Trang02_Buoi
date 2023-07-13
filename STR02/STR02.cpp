#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Nhap(string[], int&);
string ChuanHoa(string);
string process(string[], int);

int main()
{
	int n;
	string a[100];
	Nhap(a, n);
	cout << process(a, n);
	return 0;
}

void Nhap(string a[], int& n)
{
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, a[i]);
	}
}

string ChuanHoa(string str)
{
	stringstream stream;
	if (str[0] > 90)
		str[0] -= 32;
	int n = str.size();
	for (int i = 1; i < n; i++)
	{
		if (str[i] == ' ')
			continue;
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			continue;
		if (str[i - 1] == ' ' && str[i] > 90)
			str[i] -= 32;
		else if (str[i - 1] != ' ' && str[i] <= 90)
			str[i] += 32;
	}
	stream << str;
	return stream.str();
}

string process(string a[], int n)
{
	stringstream stream;
	for (int i = 0; i < n; i++)
	{
		stream << ChuanHoa(a[i]);
		stream << endl;
	}
	return stream.str();
}
