#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	int x; cin >> x;
	int max, min;
	max = min = x;
	int lb = 0, hb = 0;
	for(int i = 1; i < n; i++) {
		cin >> x;
		if(max < x) {
			hb++;
			max = x;
		}
		if(min > x) {
			lb++;
			min = x;
		}
	}

	cout << hb << " " << lb << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();
}
