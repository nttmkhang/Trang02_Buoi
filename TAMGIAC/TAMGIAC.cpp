#include<iostream>
#include<cmath>
#include<iomanip>
#include <sstream>
using namespace std;
using ll = long long;

void Nhap(ll&, ll&, ll&);
bool KiemTraTamGiac(ll, ll, ll);
ll ChuVi(ll, ll, ll);
double DienTich(ll, ll, ll);
string Process(ll a, ll b, ll c);

int main()
{
	ll a, b, c;
	Nhap(a, b, c);
	cout << Process(a, b, c);
	return 0;
}

void Nhap(ll& a, ll& b, ll& c)
{
	cin >> a >> b >> c;
}

bool KiemTraTamGiac(ll a, ll b, ll c)
{
	if (a + b > c && a + c > b && b + c > a)
		return true;
	return false;
}

ll ChuVi(ll a, ll b, ll c)
{
	return a + b + c;
}

double DienTich(ll a, ll b, ll c)
{
	double p = (double)ChuVi(a, b, c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

string Process(ll a, ll b, ll c) {
	ostringstream output;
	if (KiemTraTamGiac(a, b, c))
		output << ChuVi(a, b, c) << " " << fixed << setprecision(2) << DienTich(a, b, c);
	else
		output << "NO";
	return output.str();
}