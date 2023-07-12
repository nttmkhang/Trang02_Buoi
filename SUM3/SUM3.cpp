#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;

long double Tinh(int);
string process(int);

int main()
{
    int n;
    cin >> n;
    cout << process(n);
    return 0;
}

long double Tinh(int n)
{
    long double s = 0;
    for (int i = 1; i <= n; i++)
        s += 1.0L / i - 1.0L / (i + 1);
    return s;
}

string process(int n)
{
    stringstream stream;
    stream << fixed << setprecision(5) << Tinh(n);
    return stream.str();
}