#include <iostream>
#include <sstream>

using namespace std;

string ktTrung(long long, long long, long long, long long);

int main()
{
	long long A, B, C, D;
	cin >> A >> B >> C >> D;

	cout << ktTrung(A, B, C, D);
	return 0;
}

string ktTrung(long long A, long long B, long long C, long long D)
{
	stringstream stream;
	if (C >= A && C <= B)
	{
		stream << "YES";
		return stream.str();
	}

	if (D >= A && D <= B)
	{
		stream << "YES";
		return stream.str();
	}
	stream << "NO";
	return stream.str();
}
