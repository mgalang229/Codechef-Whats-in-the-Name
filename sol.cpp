#include <bits/stdc++.h>

using namespace std;

void test_case() {
	string s;
	getline(cin, s);
	int tmp = 0;
	for(int i = 0; i < (int) s.size(); ++i) {
		if(s[i] == ' ') {
			cout << (char) toupper(s[tmp]) << ". ";
			tmp = i + 1;
		}
	}
	cout << (char) toupper(s[tmp]);
	for(int i = tmp + 1; i < (int) s.size(); ++i) {
		cout << (char) tolower(s[i]);
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	cin.ignore();
	for (int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
