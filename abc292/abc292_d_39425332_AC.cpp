/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc292/submissions/39425332
 * Submitted at: 2023-03-04 12:35:26
 * Problem URL: https://atcoder.jp/contests/abc292/tasks/abc292_d
 * Result: AC
 * Execution Time: 138 ms
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
    int n,m;
    cin>>n>>m;
    dsu uf(n+9);
    vector<int> v(m+9),u(m+9);
    rep(i,m){
        cin>>u[i]>>v[i];
        uf.merge(u[i],v[i]);
    }
    map<int,int> top;//topの頂点数
    map<int,int> edge;
    rep1(i,1,n+1){
        if(i==uf.leader(i)){
            int size=uf.size(i);
            top[i]=size;
            //cout<<i<<endl;
        }
    }
    rep(i,m){
        edge[uf.leader(u[i])]++;
    }
    bool f=true;
    for(auto [a,b]:top){
       // cout<< top[a]<<" "<<edge[a] << endl;
        
        if(top[a]!=edge[a]){
            cout<< "No" << endl;
            return 0;
        }
    }
    cout<< "Yes" << endl;
}