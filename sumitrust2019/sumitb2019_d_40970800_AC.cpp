/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/sumitrust2019/submissions/40970800
 * Submitted at: 2023-04-27 02:22:27
 * Problem URL: https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_d
 * Result: AC
 * Execution Time: 104 ms
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
    int n,cnt=0;
    string s;
    cin>>n>>s;
    rep(i,1000)
    {
        int c[3]={i/100,(i/10)%10,i%10};
        int f=0;
        rep(j,n){
            if(s[j]=='0'+c[f])f++;
            if(f==3)break;
        }
        if(f==3) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}