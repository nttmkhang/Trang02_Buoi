#include<iostream>
#include<iomanip>
#include<vector>
#include<sstream>
using namespace std;

string TongNghichDao(vector<long double>&, int);

int main()
{
	int n;
	cin >> n;

	vector<long double> v(1000001, 0);
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		cout << TongNghichDao(v, x) << endl;
	}
	return 0;
}

string TongNghichDao(vector<long double>& v, int n)
{
	stringstream stream;
	if (v[n] != 0)
	{
		stream <<fixed << setprecision(8) << v[n];
		return stream.str();
	}
	long double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += 2.0L * (1.0L / i - 1.0L / (i + 1));
		v[i] = sum;
	}
	stream << fixed << setprecision(8) << sum;
	return stream.str();
}