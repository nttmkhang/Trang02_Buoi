#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

void Nhap(vector<long>&, int&);
string XuatTichMax(vector<long>, int);

int main()
{
	int n;
	vector<long> v;
	Nhap(v, n);
	cout << XuatTichMax(v, n);
	return 0;
}

void Nhap(vector<long>& v, int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
}

string XuatTichMax(vector<long> v, int n)
{
	stringstream stream;
	if (n == 3)
		stream << v[0] * v[1] * v[2];
	else
	{
		sort(v.begin(), v.end());
		stream << max(v[0] * v[1] * v[n - 1], v[n - 3] * v[n - 2] * v[n - 1]);
	}
	return stream.str();
}