#include<iostream>
#include<sstream>
#include<iomanip>
#include<vector>
using namespace std;

void Nhap(vector<int>&, int&);
string SapXep(vector<int>&);

int main()
{
	int n;
	vector<int> v;
	Nhap(v, n);
	cout << SapXep(v);
	return 0;
}

void Nhap(vector<int>& v, int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
}

string SapXep(vector<int>& v)
{
	stringstream stream;
	for (int i = 1; i < v.size() - 1; i++)
	{
		int index = i;
		for (int j = i + 1; j < v.size() - 1; j++)
			if (v[j] < v[index])
				index = j;
		swap(v[i], v[index]);
	}
	for (int i = 0; i < v.size(); i++)
		stream << setw(12) << v[i];
	return stream.str();
}