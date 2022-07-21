/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc039/submissions/33393873
 * Submitted at: 2022-07-21 10:31:48
 * Problem URL: https://atcoder.jp/contests/agc039/tasks/agc039_a
 * Result: WA
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
    ll k;
    string s;
    cin>>s>>k;
    ll cnt=0,size=s.size(),c=0;
    for(ll i=0;i<size-1;i++){
        if(s[i]==s[i+1]){
            ll j=i+1;
            c=2;
            while(1){
                if(s[j]==s[j+1]){j++; c++;}
                else break;
            }
            cnt+=(c/2);
            i=j;
        }
    }
    cnt=cnt*k;
    if(s[0]==s[size-1]&&s[size-2]==s[0]&&s[size-3]==s[0]&&size%2==1) cnt+=(k-1);
    cout<<cnt<<endl;

    return 0;
}