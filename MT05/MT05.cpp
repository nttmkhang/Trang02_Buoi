#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

void InterchangeSort(int[][100], int, int, int);
string process(int[][100], int, int, int);

int main()
{
	int a[100][100];
	int m, n, c;
	cin >> m >> n >> c;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	cout << process(a, m, n, c);
	return 0;
}

void InterchangeSort(int a[][100], int m, int n, int c)
{
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
			if (a[j][c] < a[i][c])
				swap(a[j][c], a[i][c]);
}

string process(int a[][100], int m, int n, int c)
{
	stringstream stream;
	InterchangeSort(a, m, n, c - 1);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			stream << setw(8) << a[i][j];
		stream << endl;
	}
	return stream.str();
}