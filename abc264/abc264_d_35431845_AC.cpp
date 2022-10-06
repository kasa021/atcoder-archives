/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc264/submissions/35431845
 * Submitted at: 2022-10-06 10:24:47
 * Problem URL: https://atcoder.jp/contests/abc264/tasks/abc264_d
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

int main() {
    string s,t="atcoder";
    cin>>s;
    vector<int> a(7);
    rep(i,7){
        rep(j,7){
            if(s[i]==s[j]&&s[i]=='a') a[i]=1;
            if(s[i]==s[j]&&s[i]=='t') a[i]=2;
            if(s[i]==s[j]&&s[i]=='c') a[i]=3;
            if(s[i]==s[j]&&s[i]=='o') a[i]=4;
            if(s[i]==s[j]&&s[i]=='d') a[i]=5;
            if(s[i]==s[j]&&s[i]=='e') a[i]=6;
            if(s[i]==s[j]&&s[i]=='r') a[i]=7;
        }
    }
    //rep(i,7) cout<<a[i]<<" ";
    cout<<endl;
   int ans=0;
    rep(i,6){
        rep1(j,i+1,7){
            if(a[i]>a[j]){
                ans++;
                //cout<<a[i]<<" "<<a[j]<<endl;
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
                
            }
        }
    }
    //rep(i,7)cout<<a[i]<<" ";
    cout<<endl;
    cout<<ans<<endl;
}
   