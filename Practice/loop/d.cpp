// Author: Abdullah Al Ahad Bhuiyan
// 24th Batch

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	bool ans = true;
	if(n >= 3){
		for(int i = 2; i <= n/2; i++) {
			if(n % i == 0) {
				ans = false;
				break;
			}
		}
	}
	cout << ((ans) ? "YES\n" : "NO\n");
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}

