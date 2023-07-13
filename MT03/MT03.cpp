#include <iostream>
#include <sstream>
using namespace std;

long TongCheo(int [][100], int);
void Nhap(int [][100], int);
string Process(int [][100], int);


int main()
{
	int n = 0;
	cin >> n;
	int a[100][100];
	Nhap(a, n);
	cout << Process(a, n);
	return 0;
}

long TongCheo(int a[][100], int n) {
	long s = 0;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			if (i == j)
				s += a[i][j];
	return s;
}

void Nhap(int a[][100], int n) {
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			cin >> a[i][j];
}

string Process(int a[][100], int n)
{
	stringstream stream;
	long s = TongCheo(a, n);
	stream << s;
	return stream.str();
}