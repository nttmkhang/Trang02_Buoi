#include <iostream>
#include <sstream>
using namespace std;
const int BC = 998244353;

void Nhap(long long*, int);
int TinhToan(long long*, int, int);
string Xuat(long long*, int);

int main()
{
    int n;
    cin >> n;
    long long* a = new long long[3 * n];
    Nhap(a, n);

    cout << Xuat(a, n);
}

void Nhap(long long* a, int n)
{
    for (int i = 0; i < 3 * n; i++)
        cin >> a[i];
}

int TinhToan(long long* a, int n, int i)
{
    long long b;
    long long du = 1;
    for (int j = i; j < 3 + i; j++)
    {
        b = a[j] + (a[j] * (a[j] - 1) / 2);
        du = du * (b % BC);
        if (du >= BC)
            du = du % BC;
    }
    return du % BC;
}

string Xuat(long long* a, int n)
{
    stringstream stream;
    for (int i = 0; i < 3 * n; i = i + 3)
        stream << TinhToan(a, n, i) << endl;
    return stream.str();
}