#include <iostream>
using namespace std;

bool** subsetSum(int[], int, int);

int main()
{
	int arr[30];
	int n;
	cin >> n;
	int V;
	cin >> V;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	bool** dp = subsetSum(arr, n, V);
	int flag = 0;
	while (flag == 0)
	{
		for (int i = 0; i <= n; i++)
		{
			if (dp[i][V] == true)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			V--;
	}
	cout << V;

	return 0;
}

bool** subsetSum(int a[], int n, int sum)
{
	bool** dp;
	dp = new bool* [n + 1];
	for (int i = 0; i <= n; i++)
		dp[i] = new bool[sum + 1];

	for (int s = 1; s <= sum; s++)
		dp[0][s] = false;
	for (int i = 0; i <= n; i++)
		dp[i][0] = true;

	for (int i = 1; i <= n; i++)
		for (int s = 1; s <= sum; s++)
			if (s < a[i - 1])
				dp[i][s] = dp[i - 1][s];
			else
				dp[i][s] = dp[i - 1][s] ||
				dp[i - 1][s - a[i - 1]];

	return dp;
}
