#include <iostream>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;

long double Tinh(int, int, int);
string process(int, int, int);

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    cout << process(a, b, c);
    return 0;
}

long double Tinh(int a, int b, int c)
{
    return (a - b) * c;
}

string process(int a, int b, int c)
{
    stringstream stream;
    stream << Tinh(a, b, c);
    return stream.str();
}