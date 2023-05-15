/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/41439803
 * Submitted at: 2023-05-15 09:34:40
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_b
 * Result: AC
 * Execution Time: 227 ms
 */

#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> ans(n);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        ans[a-1].push_back(b);
        ans[b-1].push_back(a);
    }
    rep(i,n) sort(ans[i].begin(),ans[i].end());
    rep(i,n){
        cout<<ans[i].size()<<" ";
        for(auto v:ans[i]){
            cout<<v<<" ";
        }cout<<endl;
    }
}
   
