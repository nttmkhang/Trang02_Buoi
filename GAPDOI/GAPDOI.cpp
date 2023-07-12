#include <iostream>
#include <sstream>
using namespace std;

string Process(long long n);

int main()
{
	int n;
	cin >> n;
	cout << Process(n);
	return 0;
}


string Process(long long n)
{
	stringstream stream;
	stream << n * 2;
	return stream.str();
}