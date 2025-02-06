// Author: Abdullah Al Ahad Bhuiyan
// 24th Batch

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	char gap = ' ', star = '*';
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n-i; j++)
			cout << gap;
		for(int j = 1; j <= i*2-1; j++) 
			cout << star;

		cout << "\n";
	}

	for(int i = n; i >= 0; i--) {
		for(int j = 1; j <= n-i; j++)
			cout << gap;
		for(int j = 1; j <= i*2-1; j++) 
			cout << star;

		cout << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}

