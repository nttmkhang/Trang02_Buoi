#include<iostream>
#include<sstream>
#include<string>
#include<iomanip>
using namespace std;

bool Giao(int, int, int, int, int, int, int, int, int&, int&, int&, int&);
string DienTichGiao(int, int, int, int);

int main()
{
	int xA, yA, xB, yB, xC, yC, xD, yD;
	cin >> xA >> yA >> xB >> yB >> xC >> yC >> xD >> yD;
	int L, R, T, B;
	if (Giao(xA, yA, xB, yB, xC, yC, xD, yD, L, R, T, B))
		cout << DienTichGiao(L, R, T, B);
	else
		cout << 0;
	return 0;
}

bool Giao(int xA, int yA, int xB, int yB, int xC, int yC, int xD, int yD, int& L, int& R, int& T, int& B)
{
	int L1 = min(xA, xB), R1 = max(xA, xB), T1 = max(yA, yB), B1 = min(yA, yB);
	int L2 = min(xC, xD), R2 = max(xC, xD), T2 = max(yC, yD), B2 = min(yC, yD);
	if (R1 <= L2 || R2 <= L1 || T1 <= B2 || T2 <= B1)
		return false;
	else
	{
		L = max(L1, L2);
		R = min(R1, R2);
		T = min(T1, T2);
		B = max(B1, B2);
	}
	return true;
}

string DienTichGiao(int L, int R, int T, int B)
{
	stringstream stream;
	int c1 = abs(L - R), c2 = abs(T - B);
	stream << c1 * c2;
	return stream.str();
}