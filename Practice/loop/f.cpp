// Author: Abdullah Al Ahad Bhuiyan
// 24th Batch

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b; cin >> a >> b;
	int res = min(a, b);
	while(res > 1) {
		if(a % res == 0 && b % res == 0)
			break;
		res--;
	}
	cout << res << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}

