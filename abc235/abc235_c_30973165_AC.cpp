/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/30973165
 * Submitted at: 2022-04-15 01:44:23
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_c
 * Result: AC
 * Execution Time: 766 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)

int main(){
    int n,q;
    cin>>n>>q;
    map<int ,vector<int>> mp;
    rep(i,n){
        int a;
        cin>>a;
        mp[a].push_back(i+1); //値を後ろに追加する

    }
    rep(qi,q){
        int x,k;
        cin>>x>>k;
        vector<int>& p = mp[x]; //&参照
        if(p.size() < k) cout<<-1<<endl;
        else cout<<p[k-1]<<endl;
    }
    return 0;
}