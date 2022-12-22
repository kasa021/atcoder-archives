/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/37440067
 * Submitted at: 2022-12-22 07:34:57
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_e
 * Result: WA
 * Execution Time: 36 ms
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
    ll n,sum=0;
    cin>>n;
    // map<int,int> mp;
    // rep1(i,1,n+1){
    //     mp[n/i]++;
    // }
    // for(auto [idx,v]:mp)cout<<idx<<" "<<v<<endl;

    for(ll i=1;i*i<=n;i++){
        sum+=n/i;
    }
    for(ll i=1;i*i<n;i++){
        sum+=i*((n/i)-(n/(i+1)));   
    }
    cout<< sum << endl;
}
   
