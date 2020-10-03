#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int l[n], g[n];
		for (int i = 0; i < n; i++) {
			cin >> l[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> g[i];
		}
		bool ok = true, ok2 = true;
		for (int i = 0; i < n; i++) {
			if (l[i] > g[i] && l[i] != g[i]) {
				ok = false;
				break;
			}
		}
		int cnt = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (l[cnt] > g[i] && l[cnt] != g[i]) {
				ok2 = false;
				break;
			}
			cnt++;
		}
		if (ok && ok2) {
			cout << "both\n";
		} else if (ok) {
			cout << "front\n";
		} else if (ok2) {
			cout << "back\n";
		} else {
			cout << "none\n";
		}
	}
	return 0;
}
