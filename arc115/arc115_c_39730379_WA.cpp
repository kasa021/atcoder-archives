/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc115/submissions/39730379
 * Submitted at: 2023-03-14 13:50:09
 * Problem URL: https://atcoder.jp/contests/arc115/tasks/arc115_c
 * Result: WA
 * Execution Time: 15 ms
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
    int n;
    cin>>n;
    vector<int> a(n);
    vector<bool> prime(100009, true);
    prime[0]=prime[1]=false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == true)
        {
            for (int j = 2 * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    vector<int> cnt(100009,0);
    rep1(i,2,100009){
        cnt[i]=cnt[i-1];
        if(prime[i]) cnt[i]++;
    }

    rep1(i,1,n+1)cout<< cnt[i]+1 << " ";
    cout<<endl;
    }
