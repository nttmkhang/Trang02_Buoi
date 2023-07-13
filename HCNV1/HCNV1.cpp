#include <iostream>
#include<string>
#include<sstream>
using namespace std;

string ktBenTrong(int, int, int, int, int, int);

int main()
{
    int x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    cout << ktBenTrong(x1, y1, x2, y2, x, y);
    return 0;
}

string ktBenTrong(int x1, int y1, int x2, int y2, int x, int y)
{
    stringstream stream;
    if (min(x1, x2) < x && x < max(x1, x2) && min(y1, y2) < y && y < max(y1, y2))
        stream << "YES";
    else
        stream << "NO";
    return stream.str();
}