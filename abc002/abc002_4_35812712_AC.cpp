/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc002/submissions/35812712
 * Submitted at: 2022-10-20 14:10:18
 * Problem URL: https://atcoder.jp/contests/abc002/tasks/abc002_4
 * Result: AC
 * Execution Time: 11 ms
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
      int n,m,ans=0;
      cin>>n>>m;
      vector<int> x(m),y(m);
      rep(i,m) cin>>x[i]>>y[i],x[i]--,y[i]--;
      vector<vector<bool>> know(n+9,vector<bool> (n+9,false));
      rep(l,m)  {
        know[x[l]][y[l]]=true;
        know[y[l]][x[l]]=true;
        }
        
      rep(i,1<<n){
        vector<int> member;
        rep(j,n){
            if(i&(1<<j)){
                member.push_back(j);
            }
        }
        bool f=true;
        rep(j,(int)member.size()-1){
            rep1(k,j+1,(int)member.size()){
                if(!know[member[j]][member[k]]){
                    f=false;
                    break;
                }
            }
        }
        if(f) {
            ans=max(ans,(int)member.size());
        }
      }
      cout<< ans << endl;
    }