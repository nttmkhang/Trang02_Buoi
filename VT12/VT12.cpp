#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

void Nhap(vector<int>&, int&);
int KhoangCach(vector<int>, int);
string Process(vector<int> vec, int n);

int main()
{
	vector<int> vec;
	int n;
	Nhap(vec, n);
	cout << Process(vec, n);
	return 0;
}

void Nhap(vector<int>& v, int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		v.push_back(x);
	}
}

int KhoangCach(vector<int> v, int n)
{
	int min_val = v[0], max_val = v[0];
	for (int i = 0; i < n; i++)
	{
		if (min_val > v[i])
			min_val = v[i];
		if (max_val < v[i])
			max_val = v[i];
	}
	return max_val - min_val;
}

string Process(vector<int> vec, int n) {
	ostringstream output;
	output << KhoangCach(vec, n);
	return output.str();
}