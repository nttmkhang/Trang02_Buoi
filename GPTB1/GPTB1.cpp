#include <iostream>
#include <iomanip>
#include<sstream>
using namespace std;

string HePTB1(long long, long long, long long, long long, long long, long long);

int main() {
    long long a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    cout << HePTB1(a1, b1, c1, a2, b2, c2);
    return 0;
}

string HePTB1(long long a1, long long b1, long long c1, long long a2, long long b2, long long c2)
{
    stringstream stream;
    double D = (double)a1 * b2 - a2 * b1;
    double Dx = (double)c1 * b2 - c2 * b1;
    double Dy = (double)a1 * c2 - a2 * c1;

    if (D != 0)
    {
        double x = Dx / D;
        double y = Dy / D;
        if (abs(x) <= 0.009)
            x = abs(x);
        if (abs(y) <= 0.009)
            y = abs(y);
        stream << fixed << setprecision(2) << x << " " << y;
    }
    else
    {
        if (Dx == 0 && Dy == 0)
            stream << "VOSONGHIEM";
        else
            stream << "VONGHIEM";
    }
    return stream.str();
}