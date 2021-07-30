#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// find the smallest element
	int mn = *min_element(a.begin(), a.end());
	int ans = -1;
	bool checker = true;
	for (int i = 0; i < n; i++) {
		// check if the current element matches the smallest element
		if (a[i] == mn) {
			if (ans == -1) {
				// if 'ans' is equal to -1, then store ('i' + 1) (1-based index)
				ans = i + 1;
			} else {
				// otherwise, set 'checker' to false and break the loop
				checker = false;
				break;
			}
		}
	}
	if (checker) {
		cout << ans;
	} else {
		cout << "Still Rozdil";
	}
	cout << '\n';
	return 0;
}
