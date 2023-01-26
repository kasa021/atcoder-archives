/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc115/submissions/38328879
 * Submitted at: 2023-01-26 02:56:02
 * Problem URL: https://atcoder.jp/contests/arc115/tasks/arc115_b
 * Result: AC
 * Execution Time: 85 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
// typedef modint1000000007 mint;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> c(n,vector<int>(n,0));
    rep(i,n) rep(j,n) cin>>c[i][j];

    vector<int> a(n),b(n);

    rep(i,n){
        a[i]=0;
        bool f=true;
        rep(j,n){
           b[j]=c[i][j]-a[i];
           if(b[j]<0) f=false;
        }
        rep(j,n){
            a[j]=c[j][0]-b[0];
            if(a[j]<0) f=false;
        }
        if(f){
            bool judge=true;
            rep(j,n){
                rep(k,n){
                    if(c[j][k]!=(a[j]+b[k])) judge=false;
                }
            }
            if(judge){
                cout<< "Yes" << endl;
            rep(i,n) cout<< a[i] << " ";
            cout<<endl;
            rep(i,n) cout<< b[i] << " ";
            cout<<endl;
            return 0;
            }
        }
    }
    cout<< "No" << endl;
}
