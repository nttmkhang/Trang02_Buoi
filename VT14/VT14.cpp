#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

void Nhap(vector<long>&, int&);
long long TichMax(vector<long>);
string process(vector<long>);

int main()
{
	int n;
	vector<long> a;
	Nhap(a, n);
	cout << process(a);
	return 0;
}

void Nhap(vector<long>& a, int& n)
{
	cin >> n;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
	}
}

long long TichMax(vector<long> a)
{
	int n = a.size();
	if (n == 2)
		return a[0] * a[1];
	else
	{
		sort(a.begin(), a.end());
		return max(a[0] * a[1], a[n - 2] * a[n - 1]);
	}
}

string process(vector<long> a)
{
	stringstream stream;
	stream << TichMax(a);
	return stream.str();
}