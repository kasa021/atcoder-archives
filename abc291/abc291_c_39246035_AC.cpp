/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc291/submissions/39246035
 * Submitted at: 2023-02-26 12:26:25
 * Problem URL: https://atcoder.jp/contests/abc291/tasks/abc291_c
 * Result: AC
 * Execution Time: 54 ms
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
    string s;
    cin>>s;
    set<P> mp;
    int x=0,y=0;
    mp.insert(P(0,0));
    rep(i,n){
        if(s[i]=='R'){
            x++;
            mp.insert(P(x,y));
        }else if(s[i]=='L'){
            x--;
            mp.insert(P(x,y));
        }else if(s[i]=='U'){
        y++;
    mp.insert(P(x,y));
        }else {
            y--;
            mp.insert(P(x,y));
        }
    }
    if(mp.size()==n+1){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
}
