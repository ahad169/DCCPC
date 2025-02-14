#include <bits/stdc++.h>
using namespace std;

void solve() {
		int k, s; cin >> k >> s;
		long long ans = 0;
		for(int i = 0; i <= k; i++) {
			for(int j = 0; j <= k; j++) {
				int z = s - i - j;
            	if (z >= 0 && z <= k) {
                	ans++;
            	}
			}
		}

		cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	solve();
}
