#include<iostream>
#include<string>
#include<sstream>

using namespace std;

string Matrix(int[], int, int);

int main()
{
    int m;
    cin >> m;
    int n;
    cin >> n;
    int a[10000];
    for (int i = 0; i < n * m; i++)
        cin >> a[i];
    cout << Matrix(a, m, n);
    return 0;
}

string Matrix(int a[], int m, int n)
{
    stringstream stream;
    int dem = 0;
    for (int i = 0; i < m * n; i++)
    {
        stream << a[i] << " ";
        dem++;
        if (dem == n)
        {
            dem = 0;
            stream << endl;
        }
    }
    return stream.str();
}