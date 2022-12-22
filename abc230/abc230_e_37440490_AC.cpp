/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/37440490
 * Submitted at: 2022-12-22 07:57:21
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_e
 * Result: AC
 * Execution Time: 38 ms
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
    ll n,sum=0,k;
    cin>>n;
    // map<int,int> mp;
    // rep1(i,1,n+1){
    //     mp[n/i]++;
    // }
    // for(auto [idx,v]:mp)cout<<idx<<" "<<v<<endl;
    for(ll i=1;i<=n;i++){
        if(i*i<=n) k=i;
        else break;
    }

    for(ll i=1;i<=k;i++){
        sum+=i*((n/i)-(n/(i+1)));
    }
    for(ll i=1;i<=n/(k+1);i++){
        sum+=n/i;
    }
    cout<< sum << endl;
}
   
