//============================================================================
// Name        : CodeWars7.cpp
// Author      : grec88
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string reverse_words(const string &str) {
	stringstream ss(str);
	string s, result;
	while (ss >> s) {
		int count = 0;
		while (ss.peek() == ' ') {
			char c;
			ss.get(c);
			++count;
		}
		reverse(begin(s), end(s));
		string space_str;
		space_str.insert(begin(space_str), count, ' ');
		result += s + space_str;
	}
	return result;
}

int main() {
	cout << reverse_words("This  is  an  example! ");
	return 0;
}
