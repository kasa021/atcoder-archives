/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc122/submissions/34350175
 * Submitted at: 2022-08-26 13:17:39
 * Problem URL: https://atcoder.jp/contests/abc122/tasks/abc122_b
 * Result: WA
 * Execution Time: 7 ms
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
    string s;
    cin>>s;
    int size=s.size(),ans=0;
    for(int i=0;i<size-1;i++){
        int cnt=0;
        if(s[i]=='A'||s[i]=='C'||s[i]=='G'||s[i]=='T'){
            cnt++;
            for(int j=i+1;j<size;j++){
                if(s[j]=='A'||s[j]=='C'||s[j]=='G'||s[j]=='T'){
                    cnt++;
                }else{
                    break;
                }
            }
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;
}