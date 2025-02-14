#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n = 5;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			int x; cin >> x;
			if(x == 1) {
				cout << abs(i-2) + abs(j-2) << "\n";
				return;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();
}
