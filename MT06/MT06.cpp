#include<iostream>
#include<sstream>
#include<cmath>
#include<iomanip>
#include<string>
#include<set>
using namespace std;

void Nhap(int[][100], int&, int&);
bool ktSoChinhPhuong(int);
string SoChinhPhuong(int[][100], int, int);

int main()
{
	int n, m;
	int a[100][100];
	Nhap(a, n, m);
	cout << SoChinhPhuong(a, n, m);
	return 0;
}

void Nhap(int a[][100], int& n, int& m)
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

bool ktSoChinhPhuong(int n)
{
	int temp = sqrt(n);
	return temp * temp == n;
}

string SoChinhPhuong(int a[][100], int n, int m)
{
	stringstream stream;
	set<int> se;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (ktSoChinhPhuong(a[i][j]))
				se.insert({ a[i][j] });
	if (se.empty())
		stream << "NOT FOUND";
	else
		for (set<int>::iterator it = se.begin(); it != se.end(); it++)
			stream << setw(7) << *it;
	return stream.str();
}