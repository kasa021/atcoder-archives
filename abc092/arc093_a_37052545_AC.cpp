/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc092/submissions/37052545
 * Submitted at: 2022-12-06 04:30:31
 * Problem URL: https://atcoder.jp/contests/abc092/tasks/arc093_a
 * Result: AC
 * Execution Time: 177 ms
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
    int n,sum=0;
    cin>>n;
    vector<int> a(n+9);
    a[0]=0;
    a[n+1]=0;
    rep1(i,1,n+1) cin>>a[i];
    rep(i,n+1) sum+=abs(a[i+1]-a[i]);
    rep1(i,1,n+1){
        cout<< sum-(abs(a[i]-a[i-1])+abs(a[i+1]-a[i]))+abs(a[i-1]-a[i+1]) << endl;
    }
}
   
