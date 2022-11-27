/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc182/submissions/36842669
 * Submitted at: 2022-11-27 06:41:45
 * Problem URL: https://atcoder.jp/contests/abc182/tasks/abc182_c
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
    ll n,cnt=0,k=0;
    cin>>n;
    vector<ll> a(3,0);
    while(n>0){
        a[(n%10)%3]++;
        n/=10;
        k++;
    }
    // rep(i,3){
    //     cout<<i<<" " <<a[i] << endl;
    // }
    cnt=1*a[1]+2*a[2];
    //cout<< "cnt "<<cnt << endl;
    if(cnt%3==0){
        cout<< "0" << endl;
    }else if(cnt%3==1){
        if(a[1]>0 && k>1){
            cout<< "1" << endl;
        }else if(a[2]>1 && k>2){
            cout<< "2" << endl;
        }else cout<< "-1" << endl;
    }else {
        if(a[2]>0 && k>1){
            cout<< "1" << endl;
        }else if(a[1]>1 && k>2){
            cout<< "2" << endl;
        }else cout<< "-1" << endl;
    }
}
   
