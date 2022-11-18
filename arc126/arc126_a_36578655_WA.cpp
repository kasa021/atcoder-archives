/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc126/submissions/36578655
 * Submitted at: 2022-11-18 16:55:54
 * Problem URL: https://atcoder.jp/contests/arc126/tasks/arc126_a
 * Result: WA
 * Execution Time: 7 ms
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
      int t;
      cin>>t;
      rep(i,t){
        ll ans=0;
        ll a,b,c;
        cin>>a>>b>>c;//a,2 b,3 c,4
        b/=2;//bは長さ6として扱う。
        //cout<< a<<" "<<b<<" "<<c << endl;
        if(b<=c){
            c-=b;
            ans+=b;
            b=0;
            // cout<< "1" << endl;
            // cout<< a<<" "<<b<<" "<<c << endl;
        }else {
            b-=c;
            ans+=c;
            c=0;
            // cout<< "2" << endl;
            // cout<< a<<" "<<b<<" "<<c << endl;
        }
        if(b>0){
            if(b<=2*a){
                ans+=b;
                a-=2*b;
                b=0;
                // cout<< "3" << endl;
                // cout<< a<<" "<<b<<" "<<c << endl;
            }else {
                ans+=a/2;
                b-=a/2;
                a=0;
                // cout<< "4" << endl;
                // cout<< a<<" "<<b<<" "<<c << endl;
            }
        }

        if(c<a*2){
            ans+=c/2;
            a-=c/2;
            c=0;
            // cout<< "5" << endl;
            // cout<< a<<" "<<b<<" "<<c << endl;
        }else{
            ans+=a;
            c-=a*2;
            // cout<< "6" << endl;
            // cout<< a<<" "<<b<<" "<<c << endl;
        }
        ans+=a/5;
        a/=5;
        // cout<< a<<" "<<b<<" "<<c << endl;
        // cout<<"ans"<<" ";
        cout<< ans << endl;
      }
    }
