/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc289/submissions/38812488
 * Submitted at: 2023-02-11 13:24:16
 * Problem URL: https://atcoder.jp/contests/abc289/tasks/abc289_d
 * Result: AC
 * Execution Time: 33 ms
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
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];
    int m;
    cin>>m;
    vector<bool> b(100009,true);
    int mo=0;
    rep(i,m) {
        cin>>mo;
        b[mo]=false;
    }
    int x;
    cin>>x;
    vector<bool> dp(100009,false);
    dp[0]=true;
    set<int> st;
    queue<int> q;
    q.push(0);
    int size=0;
    rep1(i,1,100000){
        size=q.size();
        while(size){
            int v=q.front();
            q.pop();
            rep(j,n){
                if(v+a[j]<=x && b[v+a[j]] && dp[v+a[j]]==false){
                    dp[v+a[j]]=true;
                    q.push(v+a[j]);
                    //cout<<v+a[j]<<endl;
                }
            }
            size--;
        }
        if(dp[x]){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}