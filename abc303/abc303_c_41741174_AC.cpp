/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc303/submissions/41741174
 * Submitted at: 2023-05-27 12:19:30
 * Problem URL: https://atcoder.jp/contests/abc303/tasks/abc303_c
 * Result: AC
 * Execution Time: 160 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    int n, m, h, k;
    cin >> n >> m >> h >> k;
    string s;
    cin >> s;
    set<P> st;
    rep(i,m){
        int a,b;
        cin>>a>>b;
        st.insert(P(a,b));
    }
    int x=0,y=0;
    rep(i,n){
        if(s[i]=='L')x--;
        if(s[i]=='R')x++;
        if(s[i]=='U')y++;
        if(s[i]=='D')y--;
        h--;
        if(h<0){
            cout<<"No"<<endl;
            return 0;
        }else if(h<k && st.count(P(x,y))){
            st.erase(P(x,y));
            h=k;
        }
    }
    cout<<"Yes"<<endl;
}