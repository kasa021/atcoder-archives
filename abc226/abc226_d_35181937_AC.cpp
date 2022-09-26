/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc226/submissions/35181937
 * Submitted at: 2022-09-26 13:15:30
 * Problem URL: https://atcoder.jp/contests/abc226/tasks/abc226_d
 * Result: AC
 * Execution Time: 141 ms
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


int gcd(int a, int b) {
    return b ? gcd(b, a%b) : a;
}
int main(){
      int n;
      cin>>n;
      vector<int> x(n),y(n);
      rep(i,n) cin>>x[i]>>y[i];
      set<P> s;
      rep(i,n){
        rep(j,n){
            if(i==j) continue;
            int p,q;
            p=x[i]-x[j];
            q=y[i]-y[j];
            if(p==0){
                if(q>0){
                s.insert(P(0,1));
                //cout<<"(0,1)"<<endl;
                }else {
                    s.insert(P(0,-1));
                //cout<<"(0,-1)"<<endl;
                }
            }else if(q==0){
                if(p>0){
                s.insert(P(1,0));
                //cout<<"(1,0)"<<endl;
                }else {
                    s.insert(P(-1,0));
                    // cout<<"(-1,0)"<<endl;
                }
            }else {
                int g=gcd(p,q);
                if(g<0) g*=-1;
                p=p/g;
                q=q/g;
                s.insert(P(p,q));
                // cout<< "(" <<p<<","<<q<<")"<< "gcd "<<g<<endl;
            }
        }
      }
      cout<< s.size() << endl;
    }
