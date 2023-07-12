#include<iostream>
#include<iomanip>
#include<vector>
#include<sstream>
using namespace std;

double TongNghichDao(vector<double>&, int);
string process(vector<double>, int&);

int main()
{
	int n; 
	vector<double> a(1000000, 0);
	cout << process(a, n);
	return 0;
}

double TongNghichDao(vector<double>& v, int n)
{
	if (v[n] != 0)
		return v[n];
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += (double)1 / i;
		v[i] = sum;
	}
	return sum;
}

string process(vector<double> a, int& n)
{
	stringstream stream;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		stream << fixed << setprecision(5) << TongNghichDao(a, x) << endl;
	}
	return stream.str();
}