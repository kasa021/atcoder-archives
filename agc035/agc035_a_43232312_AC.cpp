/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc035/submissions/43232312
 * Submitted at: 2023-07-03 17:35:21
 * Problem URL: https://atcoder.jp/contests/agc035/tasks/agc035_a
 * Result: AC
 * Execution Time: 63 ms
 */

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
typedef vector<int> vi;

#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define rep(i,n) rep2(i,0,n)
#define rep2(i,m,n) for(int i=m;i<(n);i++)
#define ALL(c) (c).begin(),(c).end()
#define dump(x) cout << #x << " = " << (x) << endl
constexpr ll TEN(int n) { return (n == 0) ? 1 : 10 * TEN(n-1); }

template<class T, class U>
ostream& operator<<(ostream& os, const pair<T, U>& p) {
	os<<"("<<p.first<<","<<p.second<<")";
	return os;
}

template<class T>
ostream& operator<<(ostream& os, const vector<T>& v) {
	os<<"{";
	rep(i, v.size()) {
		if (i) os<<",";
		os<<v[i];
	}
	os<<"}";
	return os;
}

map<int, int> M;

int main() {
	int N; cin >> N;
	vi a(N);

	bool allzero = true;
	bool zero = false;

	rep(i, N) {
		cin >> a[i];
		++M[a[i]];

		if (a[i] != 0) {
			allzero = false;
		} else {
			zero = true;
		}
	}

	bool ok = false;

	if (allzero) {
		puts("Yes");
		return 0;
	}

	if (N % 3 == 0) {
		int num = N / 3;

		if (zero) {
			int x = -1;
			rep(i, N) {
				if (a[i] != 0) {
					x = a[i];
				}
			}
			if (M[x] == num * 2 && M[0] == num) {
				ok = true;
			}
		} else {
			for (int i = 1; i < N; ++i) {
				if (a[i] != a[0]) {
					int x = a[0], y = a[i], z = x ^ y;
					if (M.count(z)) {
						if (M[x] == num && M[y] == num && M[z] == num) {
							ok = true;
						}
					}
				}
			}
		}
	}

	puts(ok ? "Yes" : "No");

	return 0;
}