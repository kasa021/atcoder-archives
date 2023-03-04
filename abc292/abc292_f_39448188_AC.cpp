/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc292/submissions/39448188
 * Submitted at: 2023-03-04 14:35:45
 * Problem URL: https://atcoder.jp/contests/abc292/tasks/abc292_f
 * Result: AC
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

double fun(double a,double si){
    return a*cos(M_PI/6-si)/cos(si);
}
int main()
{
    double c,d;
    cin>>c>>d;
    double a=min(c,d),b=max(c,d);
    if(b>=2/sqrt(3)*a){
        cout<<fixed<< setprecision(20) <<2/sqrt(3)*a << endl;
    }else{
        double low=0,high=M_PI/4;
        int cnt=50000;
        while(cnt--){
             double c1 = (low * 2 + high) / 3;
             double c2 = (low + high * 2) / 3;
             if(abs(b-fun(a,c1)>abs(b-fun(a,c2)))){
                low=c1;
             }else high=c2;
             //cout<< low<<" "<<high << endl;
        }
        cout<< fixed<< setprecision(20)<<a/cos(low)  << endl;
        //cout<< low*180/M_PI << endl;
    }
}