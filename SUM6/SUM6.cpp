#include<iostream>
#include<sstream>
#include<iomanip>
#include<cmath>
using namespace std;

string CanLongNhau(int);

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x; 
		cin >> x;
		cout << CanLongNhau(x) << endl;
	}
	return 0;
}

string CanLongNhau(int n)
{
	stringstream stream;
	double ans = 0;
	for (int i = 0; i < n; i++)
		ans = sqrt(2 + ans);
	stream << fixed << setprecision(5) << ans;
	return stream.str();
}