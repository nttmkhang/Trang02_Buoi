#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

void Nhap(vector<int>&, int&);
int ChenhLechMin(vector<int>);
string process(vector<int>);

int main()
{
    int n;
    vector<int> a;
    Nhap(a, n);
    cout << process(a);
    return 0;
}

void Nhap(vector<int>& a, int& n)
{
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
}

int ChenhLechMin(vector<int> a)
{
    int minDiff = a[1] - a[0];
    for (int i = 2; i < a.size(); i++)
    {
        int diff = a[i] - a[i - 1];
        if (diff < minDiff)
        {
            minDiff = diff;
        }
    }
    return minDiff;
}

string process(vector<int> a)
{
    stringstream stream;
    sort(a.begin(), a.end());
    stream << ChenhLechMin(a);
    return stream.str();
}