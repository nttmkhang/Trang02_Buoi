#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;

double TongCan(vector<double>& ans, int x);
void Nhap(istream& is, vector<int>& vec, int n);
void Xuat(ostream& os, const vector<int>& vec);
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

string Process(const vector<int>& vec) {
	ostringstream output;
	vector<double> ans(1000001, 0);
	for (int val : vec) {
		double sum = TongCan(ans, val);
		output << fixed << setprecision(5) << sum << endl;
	}
	return output.str();
}

double TongCan(vector<double>& ans, int x) {
	if (ans[x] != 0)
		return ans[x];
	double s = 0;
	for (int i = 1; i <= x; ++i) {
		s = sqrt(i + s);
		ans[i] = s;
	}
	return s;
}

void Nhap(istream& is, vector<int>& vec, int n) {
	for (int i = 0; i < n; ++i) {
		int val = 0;
		is >> val;
		vec.push_back(val);
	}
}

void Xuat(ostream& os, const vector<int>& vec) {
	for (int val : vec) {
		os << val << endl;
	}
}

