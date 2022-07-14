/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc128/submissions/33220697
 * Submitted at: 2022-07-14 11:21:02
 * Problem URL: https://atcoder.jp/contests/abc128/tasks/abc128_b
 * Result: CE
 * Execution Time: None ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;
using ll = long long ;

int main() {
    int n;
    cin>>n;
    vector<T> r;
    rep(i,n){
        int p;string s;
        cin>>s>>p;
        r..push_back(T(s,100-p,i));
    }
    sort(r.begin(),r.end());
    for(auto [S,P,idx]:r){
        cout<<idx+1<<endl;
    }
    return 0;
}