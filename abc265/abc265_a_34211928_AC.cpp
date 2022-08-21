/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/34211928
 * Submitted at: 2022-08-21 12:14:30
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep1(i, n) for (int i = 0; i < (int)(n); i++)
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)
#define graph vector<vector<int>>
#define all(vec) vec.begin(), vec.end()
using ll = long long ;
typedef pair<int, int> P;
typedef tuple<string, ll, ll> T;

int main() {
    int n,x,y;
    cin>>x>>y>>n;
    int sum=0;
    if(n==1){
        cout<<x<<endl;
        return 0;
    }else if(n==2){
        cout<<x*2<<endl;
        return 0;
    }else if(n>=3){
        if(3*x<y){
            cout<<n*x<<endl;
            return 0;
        }else{
            int a=n/3;
            int b=n%3;
            //cout<<a<<" "<<b<<endl;
            cout<<a*y+b*x<<endl;

        }

}
}