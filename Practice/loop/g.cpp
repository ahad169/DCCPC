// Author: Abdullah Al Ahad Bhuiyan
// 24th Batch

#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;

	for(int i = 2; i <= n; i++){
		bool isPrime = true;
		for(int j = 2; j <= i/2; j++) {
			if(i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if(isPrime) cout << i << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	return 0;
}

