#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void Nhap(vector<int>&);
string LietKeAm(vector<int>);

int main()
{
    vector<int> v;
    Nhap(v);
    cout << LietKeAm(v);
    return 0;
}

void Nhap(vector<int>& v)
{
    int x = 1;
    while (x != 0)
    {
        cin >> x;
        v.push_back(x);
    }
}

string LietKeAm(vector<int> v)
{
    stringstream stream;
    int flag = 0;
    for (int i = 0; i < v.size(); i++)
        if (v[i] < 0)
        {
            flag = 1;
            stream << v[i] << " ";
        }
    if (flag == 0)
        stream << "NOT FOUND";
    return stream.str();
}