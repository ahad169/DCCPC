// Author: Abdullah Al Ahad Bhuiyan
// 24th Batch

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int p = 0, ans = 0;
	while(n--) {
		int x; cin >> x;
		if(x > 0) p += x;
		else {
			if(p > 0) p--;
			else ans++;
		}
	}

	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}

