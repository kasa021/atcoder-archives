/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc242/submissions/34653358
 * Submitted at: 2022-09-06 09:20:15
 * Problem URL: https://atcoder.jp/contests/abc242/tasks/abc242_d
 * Result: AC
 * Execution Time: 298 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;



int main(){
     string S; cin >> S;
	int Q; cin >> Q;
	auto g = [&](char s, ll add){
		return char('A'+(s-'A'+add)%3);
	};
function<char(ll,ll)> f = [&](ll t, ll k){
		if(t == 0) return S[k];
		if(k == 0) return g(S[0],t);
		return g(f(t-1,k/2),k%2+1);
	};
	while(Q--){
		ll t,k; cin >> t >> k;
		cout << f(t,k-1) << endl;
	}
    }