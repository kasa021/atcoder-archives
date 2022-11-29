/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc252/submissions/36878369
 * Submitted at: 2022-11-29 09:04:43
 * Problem URL: https://atcoder.jp/contests/abc252/tasks/abc252_d
 * Result: WA
 * Execution Time: 81 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;


int main() {
    int n,ans=0;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    sort(all(a));
    rep(j,n){
        int i,k;
        i=lower_bound(all(a),a[j])-a.begin();
        k=a.end()-lower_bound(all(a),a[j]+1);
        //cout<< i<<" "<<k << endl;
        ans+=i*k;
    }
    cout<< ans << endl;
}
   
