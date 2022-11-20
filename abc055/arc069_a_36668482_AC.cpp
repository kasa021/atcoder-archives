/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc055/submissions/36668482
 * Submitted at: 2022-11-20 11:24:56
 * Problem URL: https://atcoder.jp/contests/abc055/tasks/arc069_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      ll n,m,ans=0;
      cin>>n>>m;
      if(2*n<=m){
        ans+=n;
        m-=2*n;
        n=0;
        ans+=m/4;
        //cout<<n<<" "<<m << endl;
        cout<< ans << endl;
      }else {
        ans+=m/2;
        cout<< ans << endl;
      }

    }