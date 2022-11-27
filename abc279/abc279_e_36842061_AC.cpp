/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36842061
 * Submitted at: 2022-11-27 06:07:51
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_e
 * Result: AC
 * Execution Time: 344 ms
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
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    rep(i,m) cin>>a[i];

    vector<int> b(n+1);
    iota(all(b),0);
    for(int i:a) swap(b[i],b[i+1]);
    vector<int> pos(n+1);
    rep(i,n+1) pos[b[i]]=i;
    iota(all(b),0);
    for(auto i:a){
        if(b[i]==1){
            cout<< pos[b[i+1]] << endl;
        }else if(b[i+1]==1){
            cout<< pos[b[i]] << endl;
        }else cout<< pos[1] << endl;
        swap(b[i],b[i+1]);
    }
}
   
