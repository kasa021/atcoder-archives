/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc131/submissions/33393204
 * Submitted at: 2022-07-21 09:49:31
 * Problem URL: https://atcoder.jp/contests/abc131/tasks/abc131_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long ;
typedef pair<ll, ll> P;
typedef tuple<string, ll, ll> T;

int main() {
    int n,l;
    cin>>n>>l;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(l+i-1);
    }
    int m=1000,ind=-1;
    for(int i=1;i<=n;i++){
        int j=abs(l+i-1);
        if(m>j) {m=j;
        ind=i;
        } 
    }
    if(l+ind-1<0)cout<<sum+m<<endl;
    else
    cout<<sum-m<<endl;

    return 0;
}