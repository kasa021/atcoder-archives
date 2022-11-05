/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36230684
 * Submitted at: 2022-11-05 12:08:44
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_b
 * Result: AC
 * Execution Time: 345 ms
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
    graph g(n+9);
    rep(i,m){
      int a,b;
      cin>>a>>b;
      g[a].push_back(b);
      g[b].push_back(a);
    }
    rep1(i,1,n+1){
        sort(all(g[i]));
    }

    rep1(i,1,n+1){
        cout<< g[i].size() << endl;
        for(auto v:g[i]){
            cout<< v << " ";
        }
        cout << endl;
    }
}