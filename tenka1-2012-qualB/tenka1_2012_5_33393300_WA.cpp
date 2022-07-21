/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/tenka1-2012-qualB/submissions/33393300
 * Submitted at: 2022-07-21 09:53:53
 * Problem URL: https://atcoder.jp/contests/tenka1-2012-qualB/tasks/tenka1_2012_5
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int ans;
    for(int i=1;i<=127;i++){
        if(i%3==a&&i%5==b&&i%7==c) ans=i;
        
    }
    cout<<ans<<endl;
    return 0;
}