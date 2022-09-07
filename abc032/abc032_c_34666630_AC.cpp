/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc032/submissions/34666630
 * Submitted at: 2022-09-07 04:45:15
 * Problem URL: https://atcoder.jp/contests/abc032/tasks/abc032_c
 * Result: AC
 * Execution Time: 44 ms
 */


#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(ll i=0; i<(n); ++i)
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;

int main() {
    int n;
    ll k;
    cin>>n>>k;
    vector<int> s(n);
    rep(i,n) {
        cin>>s[i];
        if(s[i]==0){
            cout<<n<<endl;
            return 0;
        }
    }
    if(k==0) {
        cout<<"0"<<endl;
        return 0;
    }
    int right = 0,ans=0;
    ll cnt=1;
    for (int left = 0; left < n; ++left) {
        while (right < n && cnt*s[right]<=k) {
        cnt*=s[right];
        ++right;
    }
    ans=max(ans,right-left);

    if(cnt%s[left]==0) cnt/=s[left];
        
    }
    cout<<ans<<endl;

}