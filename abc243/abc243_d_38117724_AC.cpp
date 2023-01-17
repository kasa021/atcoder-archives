/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc243/submissions/38117724
 * Submitted at: 2023-01-17 10:03:27
 * Problem URL: https://atcoder.jp/contests/abc243/tasks/abc243_d
 * Result: AC
 * Execution Time: 35 ms
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
//typedef modint1000000007 mint;
int main(){
    ll n,x,cnt=0;
    cin>>n>>x;
    string s;
    cin>>s;
    deque<char> st;
    rep(i,n){
        if(st.empty()){
            st.push_back(s[i]);
        }else {
            if(s[i]=='U'){
                char t=st.back();
                if(t=='U') st.push_back(s[i]);
                else st.pop_back();
            }else {
                st.push_back(s[i]);
            }
        }
    }
    while(!st.empty()){
        char a=st.front();
        st.pop_front();
        if(a=='U') x/=2;
        else if(a=='R') x=2*x+1;
        else x*=2;
    }
    cout<< x << endl;
    }
