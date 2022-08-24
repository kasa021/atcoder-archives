/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/34312831
 * Submitted at: 2022-08-24 12:51:34
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_d
 * Result: AC
 * Execution Time: 130 ms
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
    ll p,q,r;
    int n;
    cin>>n>>p>>q>>r;
   
    ll crr=0;
    set<ll> s({0});
    rep(i,n){
        int a;
        cin>>a;
        crr+=a;
        s.insert(crr);
    }

    for(auto x:s){
        if(s.find(x+p)!=s.end()  && s.find(x+p+q)!=s.end() && s.find(x+p+q+r)!=s.end()){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}