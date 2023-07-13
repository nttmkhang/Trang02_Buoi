#include <iostream>
#include <vector>
#include <cmath>
#include<sstream>
#include<string>
using namespace std;

string ThuaSoNguyenTo(unsigned long long);

int main()
{
	unsigned long long n;
	cin >> n;
	cout << ThuaSoNguyenTo(n);
	return 0;
}

string ThuaSoNguyenTo(unsigned long long n)
{
	stringstream stream;
	int p[1000] = { 0 };
	int a[1000] = { 0 };
	unsigned long long i = 2;
	int j = -1;
	while (n != 1)
	{
		if (n % i == 0)
			j++;
		while (n % i == 0)
		{
			p[j] = i;
			a[j]++;
			n = n / i;
		}
		if (i == 2)
			i++;
		else
			i = i + 2;
	}
	stream << j + 1 << endl;
	for (int i = 0; i <= j; i++)
		stream << p[i] << " " << a[i] << endl;
	return stream.str();
}