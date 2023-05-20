/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc302/submissions/41584428
 * Submitted at: 2023-05-20 14:25:40
 * Problem URL: https://atcoder.jp/contests/abc302/tasks/abc302_e
 * Result: AC
 * Execution Time: 816 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    int n,q,t,ans=0;
    cin>>n>>q;
    vector<set<int>> st(n);
    set<int> num;
    ans=n;
    rep(i,q){
        cin>>t;
        if(t==1){
            int v,u;
            cin>>v>>u;
            v--,u--;
            if(st[v].empty()) ans--;
            if(st[u].empty()) ans--;
            st[v].insert(u);
            st[u].insert(v);
        }else {
            int v;
            cin>>v;
            v--;
            if(!st[v].empty()) ans++;
            while(!st[v].empty()){
                auto itr=st[v].begin();
                // cout<< *itr << endl;
                st[*itr].erase(v);
                if(st[*itr].size()==0) ans++;
                st[v].erase(*itr);
            }
        }
        cout<< ans << endl;
    }
}