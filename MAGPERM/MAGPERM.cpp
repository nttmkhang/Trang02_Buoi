#include <iostream>
#include<sstream>
#include<string>
#include <algorithm>
using namespace std;

string magperm(int[], bool[], int, int);

int main()
{
    int n, k, a[100011];
    bool b[100011] = { false };
    cin >> n;
    cin >> k;
    for (int i = 1; i <= n; i++)
        a[i] = i;
    cout << magperm(a, b, n, k);
}

string magperm(int a[], bool b[], int n, int k)
{
    stringstream stream;
    if (k == 0)
        for (int i = 1; i <= n; i++)
            stream << i << " ";
    else if (n % 2 != 0)
        stream << "-1";
    else
    {
        int i = 1;
        while (1)
        {
            if (b[i] == false && i + k <= n)
            {
                swap(a[i], a[i + k]);
                b[i] = true;
                b[i + k] = true;
            }
            else if (b[i] == true)
                i++;
            else
                break;
        }
        if (count(b + 1, b + n + 1, false))
            stream << "-1";
        else
            for (int i = 1; i <= n; i++)
                stream << a[i] << " ";
    }
    return stream.str();
}