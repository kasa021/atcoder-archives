/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc145/submissions/41658978
 * Submitted at: 2023-05-24 00:44:01
 * Problem URL: https://atcoder.jp/contests/abc145/tasks/abc145_c
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int factorial(int n)
{
    int res = 1;
    for(int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}


int main()
{
    int n;
    cin >> n;
    vector<double> x(n), y(n);
    double ans = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
        a[i] = i;
    }
    do
    {
        for(int i = 0; i < n - 1; i++)
        {
            ans += distance(x[a[i]], y[a[i]], x[a[i + 1]], y[a[i + 1]]);
        }
    } while (next_permutation(a.begin(), a.end()));

    cout<<fixed << setprecision(10)<<endl;
    cout<< ans/factorial(n) << endl;
}