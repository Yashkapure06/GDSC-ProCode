#include<bits/stdc++.h>
using namespace std;

void permutationsString(string str) {
	int n = str.length();
	unsigned int opsize = pow(2, n);

	for (int i = 1; i < opsize; i++) {
		string subs = "";
		for (int j = 0; j < n; j++) {
			if (i & (1<<j))
				subs.push_back(str[j]);
		}
		do {
			cout << subs << " ";
		}
		while (next_permutation(subs.begin(), subs.end()));
	}
}

int main() {
	string str;
	getline (cin, str);
  permutationsString(str);
	return 0;
}
