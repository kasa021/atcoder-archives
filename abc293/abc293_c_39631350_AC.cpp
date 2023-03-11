/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc293/submissions/39631350
 * Submitted at: 2023-03-11 13:03:32
 * Problem URL: https://atcoder.jp/contests/abc293/tasks/abc293_c
 * Result: AC
 * Execution Time: 100 ms
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

int h, w;
vector<vector<int>> a(10, vector<int>(19, 0));
int ans=0;
vector<int> mx = {1,0};
vector<int> my = {0,1};
void dfs(int x,int y,set<int> st){
    st.insert(a[x][y]);
    if(x==h-1 && y==w-1){
        if(st.size() == h+w-1) ans++;
    }else {
        rep(i,2){
            int nx=x+mx[i],ny=y+my[i];
            if(nx>=h || ny >= w) continue;
            dfs(nx,ny,st);
        }
    }
}


int main()
{
    int cnt=0;
    cin>>h>>w;
    rep(i,h){
        rep(j,w){
            cin>>a[i][j];
        }
    }

    int nowx=0,nowy=0;
    set<int> st;
    dfs(nowx,nowy,st);
    cout<< ans << endl;
    // cout<< cnt << endl;
}