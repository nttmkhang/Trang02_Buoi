#define _USE_MATH_DEFINES
#include<iostream>
#include<iomanip>
#include<cmath>
#include <sstream>
using namespace std;

void Nhap(int&);
double DienTich(int);
string Process(int n);

int main()
{
	int n;
	Nhap(n);
	cout << Process(n);
	return 0;
}

void Nhap(int& n)
{
	cin >> n;
}

double DienTich(int n)
{
	return (double)n * n * (M_PI) / 2;
}

string Process(int n) {
	ostringstream output;
	output << fixed << setprecision(3) << DienTich(n);
	return output.str();
}