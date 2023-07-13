#include<iostream>
#include<vector>
#include<sstream>
#include<iomanip>
using namespace std;

void Nhap(vector<vector<int>>&, int&, int&);
string LonNhat(vector<vector<int>>, int, int);

int main()
{
	int n, m;
	vector<vector<int>> v;
	Nhap(v, n, m);
	cout << LonNhat(v, n, m);
	return 0;
}

void Nhap(vector<vector<int>>& v, int& n, int& m)
{
	cin >> n >> m;
	v = vector<vector<int>>(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> v[i][j];
}

string LonNhat(vector<vector<int>> v, int n, int m)
{
	stringstream stream;
	vector<vector<int>> temp(n, vector<int>(m, 0));
	for (int i = 0; i < n; i++)
		temp[i][0] = v[i][0];
	for (int j = 1; j < m; j++)
	{
		for (int i = 0; i < n; i++)
		{
			if (i == 0)
				temp[i][j] = v[i][j] + max(temp[i][j - 1], temp[i + 1][j - 1]);
			else if (i == n - 1)
				temp[i][j] = v[i][j] + max(temp[i][j - 1], temp[i - 1][j - 1]);
			else
				temp[i][j] = v[i][j] + max(max(temp[i][j - 1], temp[i + 1][j - 1]), temp[i - 1][j - 1]);
		}
	}
	int max_val = temp[0][m - 1];
	for (int i = 1; i < n; i++)
		max_val = max(max_val, temp[i][m - 1]);
	stream << max_val;
	return stream.str();
}