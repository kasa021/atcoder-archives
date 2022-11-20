/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/36675504
 * Submitted at: 2022-11-20 12:45:31
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_c
 * Result: AC
 * Execution Time: 436 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(long long i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main(){
      ll n,a,b;
      cin>>n>>a>>b;
      ll p,q,r,s;
      cin>>p>>q>>r>>s;
      ll mink1,maxk1,mink2,maxk2;
      mink1=max(1ll-a,1ll-b);
      maxk1=min(n-a,n-a);
      mink2=max(1ll-a,b-n);
      maxk2=min(n-a,b-1ll);
      //cout<< mink1<<" "<<maxk1<<" "<<mink2<<" "<<maxk2 << endl;
      rep1(i,p,q+1){
        rep1(j,r,s+1){
            if((mink1<=i-a && i-a<=maxk1 && mink1<=j-b && j-b<=maxk1 && i-a==j-b) || (mink2<=i-a && i-a<=maxk2 && -1*maxk2<=j-b && j-b<=-1*mink2 && i-a==-1*(j-b))){
                cout<< "#" ;
            }else cout<< ".";
        }
        cout<<endl;
      }
    }