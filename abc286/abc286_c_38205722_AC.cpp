/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc286/submissions/38205722
 * Submitted at: 2023-01-21 12:24:26
 * Problem URL: https://atcoder.jp/contests/abc286/tasks/abc286_c
 * Result: AC
 * Execution Time: 19 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
using ull=unsigned long long;
//typedef modint1000000007 mint;


int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    ll size=s.size(),ans=INT64_MAX;
    if(size%2==0){
        rep(i,size){
            ll now=0;
            ll mid1=n/2-1,mid2=n/2;
            ll left=mid1,right=mid2;
            while(left>=0){
                if(s[left]!=s[right]) now+=b;
                left--;
                right++;
            }
            ans=min(ans,now+i*a);
            s=s.substr(1)+s[0];
        }
    }else {
        rep(i,size){
            ll now=0;
            ll mid=n/2;
            ll left=mid,right=mid;
            while(left>=0){
                if(s[left]!=s[right]) now+=b;
                left--;
                right++;
            }
            ans=min(ans,now+i*a);
            s=s.substr(1)+s[0];
        }
    }
    cout<< ans << endl;
    }
