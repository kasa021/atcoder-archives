/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc061/submissions/35960371
 * Submitted at: 2022-10-25 10:40:54
 * Problem URL: https://atcoder.jp/contests/arc061/tasks/arc061_a
 * Result: AC
 * Execution Time: 8 ms
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
    ll ans=0,cnt=0;
    rep(i,1<<((int)s.size()-1)){
        string t;
        t+=s[0];
        //cnt++;
        rep(j,(int)s.size()-1){
            if(i & (1<<j)){
                if((int)t.size()>=1){
                    ans+=stol(t);
                    //cout<< t << endl;
                    t="";
                    t+=s[j+1];
                }
            }else{
                t+=s[j+1];
            }
        }
        if((int)t.size()>=1){
            ans+=stol(t);
            //cout<< t << endl;
        }
    }  
    cout<< ans << endl;
    //cout<< cnt << endl;
}