#include <iostream>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;

void Nhap(int*&, int);
vector<int> TongUoc(int*, int);
int SumDiv(int);
string Process(int*, int);

int main()
{
	int n = 0;
	cin >> n;
	int* arr = NULL;
	Nhap(arr, n);
	cout << Process(arr, n);
	return 0;
}

vector<int> TongUoc(int* arr, int n) {
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		v.push_back(SumDiv(arr[i]));
	}
	return v;
}

int SumDiv(int n) {
	int s = 0;
	for (int i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			if (n / i == i)
				s += i;
			else {
				s += i;
				s += n / i;
			}
		}
	}
	return s;
}

void Nhap(int*& arr, int n) {
	arr = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
}

string Process(int* arr, int n)
{
	stringstream stream;
	vector<int> v = TongUoc(arr, n);
	for (int i : v)
		stream << i << endl;
	return stream.str();
}