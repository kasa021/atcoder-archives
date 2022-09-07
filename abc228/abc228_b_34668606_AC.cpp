/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc228/submissions/34668606
 * Submitted at: 2022-09-07 06:50:54
 * Problem URL: https://atcoder.jp/contests/abc228/tasks/abc228_b
 * Result: AC
 * Execution Time: 33 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main() {
    int n,x,ans=1;
    cin>>n>>x;
    int a[n];
    rep(i,n) {
        cin>>a[i];
        a[i]--;
    }
    int b[n]={0};
    x--;
    b[x]=1;
    while(true){
        if(b[a[x]]==0){
            b[a[x]]=1;
            ans++;
            x=a[x];
            
        }else break;
    }
    //rep(i,n) cout<< b[i] << endl;
    cout<<ans<<endl;
}