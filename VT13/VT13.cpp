#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

void Nhap(vector<int>&, int&);
pair<int, int> TimCapMax(vector<int>&, int&);
string Process(vector<int>, int);

int main()
{
    vector<int> v;
    int n;
    Nhap(v, n);
    cout << Process(v, n);
    return 0;
}

void Nhap(vector<int>& v, int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

pair<int, int> TimCapMax(vector<int>& v, int& n) 
{
    int max = 0;
    pair<int, int> pa = { -1, -1 };
    for (int i = 0; i < n - 1; ++i) 
    {
       
        if (v[i] + v[i + 1] >= max && i > pa.first) {
            max = v[i] + v[i + 1];
            pa.first = i;
            pa.second = i + 1;
        }
    }
    if (v[n - 1] + v[0] > max)
        return { n - 1, 0 };
    return pa;
}

string Process(vector<int> v, int n)
{
    stringstream stream;
    pair<int, int> pa = TimCapMax(v, n);
    stream << setw(12) <<  v[pa.first] << setw(12) << v[pa.second];
    return stream.str();
}