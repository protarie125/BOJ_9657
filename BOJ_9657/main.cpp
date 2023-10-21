#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

vi dp(1001, 1);

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	// 0 = SK, 1 = CY
	dp[1] = 0;
	dp[3] = 0;
	dp[4] = 0;
	dp[5] = 0;

	int n;
	cin >> n;

	for (auto i = 6; i <= n; ++i) {
		if (1 == dp[i - 1]) {
			dp[i] = 0;
		}

		if (1 == dp[i - 3]) {
			dp[i] = 0;
		}

		if (1 == dp[i - 4]) {
			dp[i] = 0;
		}
	}

	cout << (0 == dp[n] ? "SK" : "CY");

	return 0;
}