#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b; cin >> a >> b;
	int ans = 0;
	while(true) {
		if(a > b) break;
		a *= 3;
		b *= 2;
		ans++;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();
}
