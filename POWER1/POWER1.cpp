#include <iostream>
#include <sstream>

using namespace std;

string pow(long long, long);

int main()
{
	long long a;
	cin >> a;
	long b;
	cin >> b;
	cout << pow(a, b);
	return 0;
}

string pow(long long a, long b)
{
	stringstream stream;
	long long res = 1;
	while (b)
	{
		if (b % 2 == 1)
		{
			res *= a;
			res %= 1000000007;
		}
		b /= 2;
		a *= a;
		a %= 1000000007;
	}
	stream << res;
	return stream.str();
}