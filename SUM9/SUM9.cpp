#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>
using namespace std;

void Nhap(int[], int&);
double Tong(int);
string process(int[], long long);

int main()
{
	int a[100];
	int n = 0;
	Nhap(a, n);
	cout << process(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
}

double Tong(int n) {
	double s = 1;
	for (int i = 0; i < n; ++i) {
		s = 1 / (1 + s);
	}
	return s;
}


string process(int a[], long long n)
{
	stringstream stream;
	for (int i = 0; i < n; ++i) {
		double s = Tong(a[i]);
		stream << fixed << setprecision(5) << s << endl;
	}
	return stream.str();
}