/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc115/submissions/39730114
 * Submitted at: 2023-03-14 13:40:47
 * Problem URL: https://atcoder.jp/contests/arc115/tasks/arc115_c
 * Result: WA
 * Execution Time: 83 ms
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

int enum_div(int n){
    int res=0;
    res+=1;
    for(int i = 2 ; i*i <= n ; ++i){
        if(n%i == 0){
            res++;
            if(i*i != n){
                res++;
           }
       }
   }
return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    rep(i,n){
        if(i==0) a[i]=1;
        else {
            a[i]=enum_div(i+1)+1;
            //cout<< enum_div(i+1) << endl;
        }
    }
    rep(i,n)cout<< a[i] << " ";
    cout<<endl;
    }
