/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc158/submissions/39685448
 * Submitted at: 2023-03-12 14:47:39
 * Problem URL: https://atcoder.jp/contests/arc158/tasks/arc158_b
 * Result: AC
 * Execution Time: 92 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
using ull = unsigned long long;
// typedef modint1000000007 mint;

int main()
{
    ll n;
    cin >> n;
    vector<double> negative, positive, x(n), vec;
    rep(i, n)
    {
        double b;
        cin >> b;
        x[i] = (double)1 / b;
    }
    rep(i, n)
    {
        if (x[i] > 0)
            positive.push_back(x[i]);
        else
            negative.push_back(x[i]);
    }

    sort(all(positive));
    sort(all(negative));

    if (positive.size() <= 6)
    {
        for (auto v : positive)
            vec.push_back(v);
    }
    else
    {
        rep(i, 3)
        {
            vec.push_back(positive[i]);
        }
        for (int i = positive.size() - 1; i >= positive.size() - 3; i--)
        {
            vec.push_back(positive[i]);
        }
    }

    if (negative.size() <= 6)
    {
        for (auto v : negative)
            vec.push_back(v);
    }
    else
    {
        rep(i, 3)
        {
            vec.push_back(negative[i]);
        }
        for (int i = negative.size() - 1; i >= negative.size() - 3; i--)
        {
            vec.push_back(negative[i]);
        }
    }

    double mi=10000,ma=-100000;
    rep(i,vec.size()){
        rep1(j,i+1,vec.size()){
            rep1(k,j+1,vec.size()){
                double val=vec[i]*vec[j]+vec[j]*vec[k]+vec[i]*vec[k];
                ma=max(ma,val);
                mi=min(mi,val);
            }
        }
    }
    cout<< fixed<< setprecision(20) << mi<< endl;
    cout << fixed << setprecision(20) << ma << endl;
}
