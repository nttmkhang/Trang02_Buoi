#include <iostream>
#include <vector>
#include <iomanip>
#include <sstream>
using namespace std;

void Nhap(istream& is, vector<int>& vec, int n);
double TongLeNghichDao(vector<double>& ans, int x);
string Process(const vector<int>& vec);

int main()
{
	int n = 0;
	cin >> n;
	vector<int> vec;
	Nhap(cin, vec, n);
	cout << Process(vec);
	return 0;
}

double TongLeNghichDao(vector<double>& ans, int x)
{
	if (ans[x] != 0)
		return ans[x];
	double sum = 0;
	for (int i = 1; i <= x; i++) 
	{
		sum += (double)1 / (2 * i - 1);
		ans[i] = sum;
	}
	return sum;
}

void Nhap(istream& is, vector<int>& vec, int n) {
	for (int i = 0; i < n; ++i) {
		int val = 0;
		is >> val;
		vec.push_back(val);
	}
}

string Process(const vector<int>& vec) {
	ostringstream output;
	vector<double> ans(1000001, 0);
	for (int val : vec) {
		double sum = TongLeNghichDao(ans, val);
		output << fixed << setprecision(5) << sum << endl;
	}
	return output.str();
}