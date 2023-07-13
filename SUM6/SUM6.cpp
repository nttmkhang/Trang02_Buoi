#include<iostream>
#include<sstream>
#include<iomanip>
#include<cmath>
#include <vector>
using namespace std;

void Nhap(vector<int>&);
float CanLongNhau(int);
string Xuat(vector<int>);

int main()
{
	vector<int> v;
	Nhap(v);
	cout << Xuat(v);
	return 0;
}

void Nhap(vector<int>& v)
{
	int n;
	cin >> n;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
}

float CanLongNhau(int a)
{
	float ans = 0;
	for (int i = 0; i < a; i++)
		ans = sqrt(2 + ans);
	return ans;
}

string Xuat(vector<int> v)
{
	stringstream stream;
	for (int i = 0; i < v.size(); i++)
		stream << fixed << setprecision(5) << CanLongNhau(v[i]) << endl;
	return stream.str();
}