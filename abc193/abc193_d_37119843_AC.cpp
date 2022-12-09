/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc193/submissions/37119843
 * Submitted at: 2022-12-09 20:41:26
 * Problem URL: https://atcoder.jp/contests/abc193/tasks/abc193_d
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
#define rep1(i,s,n) for(ll i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<ll,ll>;
using T = tuple<ll,ll,ll>;
using graph=vector<vector<ll>>;
//typedef modll1000000007 mll;
int main(){
      ll k,nows=0,nowt=0,nume=0,deno=0;
      string s,t;
      cin>>k>>s>>t;
      vector<ll> ms(11),mt(11),total(11);
      rep(i,4){
        ms[s[i]-'0']++;
        mt[t[i]-'0']++;
        total[s[i]-'0']++;
        total[t[i]-'0']++;
      }
      rep1(i,1,10){
        ll ten1=1,ten2=1;
        rep(j,ms[i]) ten1*=10;
        nows+=i*ten1;
        
        rep(j,mt[i]) ten2*=10;
        nowt+=i*ten2;
      }
    
      rep1(i,1,10){
        rep1(j,1,10){
            ll tens=1,tent=1;
            rep(l,ms[i]+1) tens*=10;
            rep(l,mt[j]+1) tent*=10;
            ll p=nows-(tens/10)*i+tens*i,q=nowt-(tent/10)*j+tent*j;
            if(p>q){
                if(i!=j)deno+=(k-total[i])*(k-total[j]);
                else deno+=(k-total[i])*(k-total[i]-1);
                //cout<<i<<" "<<j<<" "<<(k-total[i])*(k-total[j])<<endl;
            }
        }
      }
      ll left=0;
      rep1(i,1,10) {
        left+=(k-total[i]);
        //cout<< k<<" "<<total[i] << endl;
      }
      //cout<< left << endl;
      left=(left*(left-1));
      
      nume=left;
      //cout<< deno<<" "<<nume << endl;
      cout<< fixed<< setprecision(20) << deno/(double)nume << endl;
    }
