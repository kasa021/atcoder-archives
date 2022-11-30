/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc101/submissions/36892170
 * Submitted at: 2022-11-30 05:25:55
 * Problem URL: https://atcoder.jp/contests/abc101/tasks/arc099_a
 * Result: AC
 * Execution Time: 35 ms
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
    int n,k,cnt=0;
    cin>>n>>k;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    int m=*min_element(all(a));
    rep(i,n){
        if(a[i]==m) cnt++;
    }
    cout<< (n-cnt+k-2)/(k-1) << endl;
}
   
