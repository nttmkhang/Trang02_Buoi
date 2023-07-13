#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;

long long Tinh(long long);
string process(long long);

int main()
{
    long long n;
    cin >> n;
    cout << process(n);
    return 0;
}

long long Tinh(long long n)
{
    long long s = 0;
    for (long long i = 1; i <= n; ++i) {
        s += i * i;
    }
    return s;
}

string process(long long n)
{
    stringstream stream;
    stream << fixed << setprecision(5) << Tinh(n);
    return stream.str();
}