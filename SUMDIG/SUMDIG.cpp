#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void Nhap(string&);
int TinhTong(string);
string Process(int s);

int main()
{
	int s; cin >> s;
	cout << Process(s);
	return 0;
}

void Nhap(string& n)
{
	cin >> n;
}

int TinhTong(string n)
{
	int ans = 0;
	for (int i = 0; i < n.size(); i++)
		ans += (n[i] - 48);
	return ans;
}

string Process(int s) {
	ostringstream output;
	for (int i = 0; i < s; i++)
	{
		string n;
		Nhap(n);
		output << TinhTong(n) << endl;
	}
	return output.str();
}