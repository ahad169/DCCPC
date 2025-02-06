// Author: Abdullah Al Ahad Bhuiyan
// 24th Batch

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int x;
	int even = 0, odd = 0, pos = 0, neg = 0;
	while(n--) {
		int x; cin >> x;
		if(x < 0) neg++;
		else if(x > 0) pos++;

		if(x & 1) odd++;
		else even++;
	}

	cout << "Even: " << even << "\n";
	cout << "Odd: " << odd << "\n";
	cout << "Positive: " << pos << "\n";
	cout << "Negative: " << neg << "\n";;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}

