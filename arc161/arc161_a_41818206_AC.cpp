/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc161/submissions/41818206
 * Submitted at: 2023-05-28 15:08:29
 * Problem URL: https://atcoder.jp/contests/arc161/tasks/arc161_a
 * Result: AC
 * Execution Time: 78 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	rep(i, n) cin>>a[i];
	sort(all(a));
	vector<int> b(n);
	for(int i=0; i<n;i+=2) b[i] = a[i/2];
	for(int i=1; i<n;i+=2) b[i] = a[n/2 + i/2+1];
	bool ok = true;
	// rep(i,n) cout<<b[i]<<" ";
	// cout<<endl;
	for(int i=1;i<n-1;i+=2){
		if(b[i-1]< b[i] && b[i] > b[i+1]) continue;
		else ok=false;
	}
	cout<<(ok ? "Yes" : "No")<<endl;
}