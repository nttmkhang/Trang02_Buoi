#include <iostream>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <sstream>

using namespace std;

void Nhap(int[], int&);
long double Tinh(int);
string process(int[], int);

int main()
{
	int n;
	int a[1000];
	Nhap(a, n);
	cout << process(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

long double Tinh(int n)
{
	long double s = 0;
	for (int i = n; i >= 1; i--)
	{
		s = sqrt(s + i);
	}
	return s;
}

string process(int a[], int n)
{
	stringstream stream;
	for (int i = 0; i < n; i++)
	{
		stream << fixed << setprecision(5) << Tinh(a[i]) << endl;
	}
	return stream.str();
}