/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc195/submissions/37438467
 * Submitted at: 2022-12-22 05:58:10
 * Problem URL: https://atcoder.jp/contests/abc195/tasks/abc195_d
 * Result: AC
 * Execution Time: 14 ms
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
    int n,m,q;
    cin>>n>>m>>q;
    vector<P> bag;
    rep(i,n){
        int a,b;
        cin>>a>>b;
        bag.push_back(P(a,b));
    }
    sort(all(bag));
    vector<int> x(m+9);
    rep(i,m)cin>>x[i];
    rep(i,q){
        int l,r;
        cin>>l>>r;
        r--;l--;
        vector<int> todo;
        rep(j,m){
            if(l<=j && j<=r) continue;
            todo.push_back(x[j]);
        }
        sort(all(todo));
        vector<bool> visit(n,false);
        map<int,int> value;
        int ans=0;
        rep(j,todo.size()){
           int idx=-1;
           rep(k,n){
            if(visit[k]) continue;
            auto [w,v]=bag[k];
            if(w<=todo[j] && v>=value[j]){
                value[j]=v;
                idx=k;
            }
           }
           if(idx!=-1){
            visit[idx]=true;
            ans+=bag[idx].second;
           }
        }
        cout<< ans << endl;
    }
}
   
