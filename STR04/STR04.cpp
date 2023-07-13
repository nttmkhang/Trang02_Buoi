#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include <map>
using namespace std;

map<char, int> TanSuat(string str);
void Xuat(ostream& os, map<char, int> map);
string Process(string str);

int main() {
	string str;
	getline(cin, str);
	cout << Process(str);
}

string Process(string str) {
	ostringstream output;
	map<char, int> map = TanSuat(str);
	Xuat(output, map);
	return output.str();
}

map<char, int> TanSuat(string str) {
	map<char, int> map;
	for (char ch : str) {
		if (isupper(ch)) {
			ch = tolower(ch);
		}
		if (ch != ' ' && !ispunct(ch)) {
			map[ch]++;
		}
	}
	return map;
}

void Xuat(ostream& os, map<char, int> map) {
	for (auto pair : map) {
		os << pair.first << " " << pair.second << endl;
	}
}