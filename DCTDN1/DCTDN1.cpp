#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

void Nhap(vector<int>&);
string ChuoiDaiNhat(vector<int>);

int main()
{
	
	vector<int> v;
	Nhap(v);
	cout << ChuoiDaiNhat(v);
	return 0;
}

void Nhap(vector<int>& v)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
}

string ChuoiDaiNhat(vector<int> v)
{
	stringstream stream;
	vector<int> temp(v.size(), 0);
	for (int i = 0; i < v.size(); i++)
	{
		temp[i] = 1;
		for (int j = i - 1; j >= 0; j--)
			if (v[i] > v[j])
				temp[i] = max(temp[i], temp[j] + 1);
	}
	int max_length = temp[0];
	for (int i = 1; i < v.size(); i++)
		if (temp[i] > max_length)
			max_length = temp[i];
	stream << max_length;
	return stream.str();
}