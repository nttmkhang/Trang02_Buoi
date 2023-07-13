#include <iostream>
#include <sstream>
using namespace std;

int TongIndexLe(int a[][100], int, int);
void Nhap(int a[][100], int, int);
string Process(int a[][100], int, int);

int main()
{
	int n, m;
	cin >> n >> m;
	int a[100][100];
	Nhap(a, n, m);
	cout << Process(a, n, m);
	return 0;
}

int TongIndexLe(int a[][100], int n, int m)
{
	int ans = 0;
	for (int i = 1; i < n; i+=2)
	{
		for (int j = 0; j < m; j++)
		{
			ans += a[i][j];
		}
	}
	return ans;
}

string Process(int a[][100], int n, int m) {
	ostringstream output;
	int ans = TongIndexLe(a, n, m);
	output << ans;
	return output.str();
}

void Nhap(int a[][100], int n, int m) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}