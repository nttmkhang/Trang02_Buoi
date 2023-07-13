#include <iostream>
#include <iomanip>
#include <algorithm>
#include <sstream>
using namespace std;

void Nhap(int**&, int&, int&);
void SapXepHang(int**&, int, int, int);
string process(int**&, int, int, int);

int main()
{
    int m;
    cin >> m;
    int n;
    cin >> n;
    int i;
    cin >> i;
    int** a;
    Nhap(a, m, n);
    cout << process(a, m, n, i);
    return 0;
}

void Nhap(int**& a, int& m, int& n)
{
    a = new int* [m];
    for (int j = 0; j < m; j++)
    {
        a[j] = new int[n];
        for (int k = 0; k < n; k++)
            cin >> a[j][k];
    }
}

void SapXepHang(int**& a, int m, int n, int i)
{
    for (int p = 0; p < n - 1; p++)
        for (int q = p + 1; q < n; q++)
        {
            if (a[i - 1][p] > a[i - 1][q])
                swap(a[i - 1][p], a[i - 1][q]);
        }
}

string process(int**& a, int m, int n, int i)
{
    stringstream stream;
    SapXepHang(a, m, n, i);
    for (int j = 0; j < m; j++)
    {
        for (int k = 0; k < n; k++)
            stream << a[j][k] << " ";
        stream << endl;
    }
    return stream.str();
}