/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc026/submissions/36136778
 * Submitted at: 2022-11-01 10:30:38
 * Problem URL: https://atcoder.jp/contests/arc026/tasks/arc026_2
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep1(i, s, n) for (ll i = (s); i < (ll)(n); i++)
#define graph vector<vector<ll>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;

vector<ll> enum_div(ll n){
    vector<ll> ret;
    ret.push_back(1);
    for(ll i = 2 ; i*i <= n ; ++i){
        if(n%i == 0){
            ret.push_back(i);
            if(i*i != n){
                ret.push_back(n/i);
           }
       }
   }
return ret;
}

int main() {
   ll n,sum=0;
   cin>>n;
   if(n==1){
    cout<< "Deficient" << endl;
    return 0;
   }
   vector<ll> div=enum_div(n);
   for(ll v:div) sum+=v;
   if(n==sum) cout<< "Perfect" << endl;
   else if(n>sum) cout<< "Deficient" << endl;
   else cout<< "Abundant" << endl;
}