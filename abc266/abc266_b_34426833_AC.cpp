/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/34426833
 * Submitted at: 2022-08-28 12:20:55
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_b
 * Result: AC
 * Execution Time: 648 ms
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
    ll n;
    cin>>n;
    ll a=998244353;
    for(ll i=0;i<a;i++){
        if((n-i)%a==0) {
            cout<<i<<endl;
            return 0;
        }
    }
}