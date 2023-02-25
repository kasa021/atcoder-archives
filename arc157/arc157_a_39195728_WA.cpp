/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc157/submissions/39195728
 * Submitted at: 2023-02-25 13:36:58
 * Problem URL: https://atcoder.jp/contests/arc157/tasks/arc157_a
 * Result: WA
 * Execution Time: 5 ms
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
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    if(n==1){
            cout<< "Yes" << endl;
        return 0;
    }
    if(n==2){
        cout<< "Yes" << endl;
        return 0;
    }
    if(n==3){
        if(a==2 || (a==1 && b==1) || (b==1 && d==1) || (b==1 && c==1) || (c==1 && a==1) || d==2 ||(d==1 && c==1)){
            cout<< "Yes" << endl;
        }else cout<< "No" << endl;
        return 0;
    }
    if(n==4){
        if(a==3 ||(a==2&&b==1) || (a==1 && b==1 &&c==1)||(a==1 && b==1 && d==1) || (b==2 && c==1) || (a==1 && b==1 && c==1) || (b==1 && d==2) || (b==1 && c==1 && d==1)){
            cout<< "Yes" << endl;
        }else cout<< "No" << endl;
        return 0;
    }

    if((c==0 && d==0 && a==0) || (d==0 && a==0 && b==0)){
        cout<< "No" << endl;
    }else{
        if((a==0 && b==0 && c==0) || (b==0 && c==0 && d==0)){
            cout<< "Yes" << endl;
        }else if((a==0 && b==0 && c==1) || (c==0 && d==0 && b==1) ||(a==0 && c==0 && b==1)||(b==0 && d==0 && c==1) ){
            cout<< "Yes" << endl;
        }else if(b==0 && c==0){
            cout<< "No" << endl;
        }else if(d==0 && a==0 && abs(b-c)<=1){
            cout<< "Yes" << endl;
        }else if(a==0 && abs(b-c)<=1){
            cout<< "Yes" << endl;
        }else if(b==0 && c==1){
            cout<< "Yes" << endl;
        }else if(c==0 && b==1){
            cout<< "Yes" << endl;
        }else if(d==0 && abs(b-c)<=1){
            cout<< "Yes" << endl;
        }else if(a>0 && b>0 && c>0 && d>0){
            if(abs(b-c)<=1){
                cout<< "Yes" << endl;
            }else cout<< "No" << endl;
        }
    }
    }

