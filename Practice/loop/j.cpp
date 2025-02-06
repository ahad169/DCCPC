// Author: Abdullah Al Ahad Bhuiyan
// 24th Batch

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int cnt = 0, mul = 1;
	int tmp = n;
	while(tmp) {
		int x = tmp % 10;
		if(x != 0)
			cnt++;
		mul *= 10;
		tmp /= 10;
	}
	cout << cnt << "\n";

	mul = 1, tmp = n;
	while(tmp) {
		int x = tmp % 10;
		if(x != 0) cout << x * mul << " ";
		mul *= 10;
		tmp /= 10;
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--)
			solve();
	return 0;
}
