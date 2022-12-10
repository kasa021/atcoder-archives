/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc281/submissions/37186586
 * Submitted at: 2022-12-10 14:03:58
 * Problem URL: https://atcoder.jp/contests/abc281/tasks/abc281_b
 * Result: AC
 * Execution Time: 3 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define rep1(i,s,n) for(int i=s;i<n;i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int,int>;
using T = tuple<int,int,int>;
using graph=vector<vector<int>>;
//typedef modint1000000007 mint;
int main(){
    string s,num="";
    int n=0;
    cin>>s;
    if((int)s.size()!=8){
        cout<< "No" << endl;
    }else {
        if(s[0]>='A' &&  s[0]<='Z' &&  s[(int)s.size()-1]>='A' && s[(int)s.size()-1]<='Z'){
            for(int i=1;i<(int)s.size()-1;i++){
            num+=s[i];
            if(s[i]>='A' && s[i]<='Z'){
                cout<< "No" << endl;
                return 0;
            }
        }
        n=stoi(num);
        if(n>=100000 && n<=999999 && (int)num.size()==6){
            cout<< "Yes" << endl;
        }else cout<< "No" << endl;
        }else {
            cout<< "No" << endl;
        }
    }
    }

