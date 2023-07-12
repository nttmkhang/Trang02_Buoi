#include<iostream>
#include<sstream>
using namespace std;

string CheckDauCuoi(string);

int main()
{
	string n;
	while (cin >> n)
	{
		cout << CheckDauCuoi(n);
		cout << endl;
	}
	return 0;
}

string CheckDauCuoi(string n)
{
	stringstream stream;
	if (n[0] == n[n.size() - 1])
		stream << "YES";
	else
		stream << "NO";
	return stream.str();
}