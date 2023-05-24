/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc145/submissions/41659037
 * Submitted at: 2023-05-24 00:49:58
 * Problem URL: https://atcoder.jp/contests/abc145/tasks/abc145_c
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

double dis(int x1, int y1, int x2, int y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}



int main()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    double ans = 0,cnt=0;
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
            ans += dis(x[a[i]], y[a[i]], x[a[i + 1]], y[a[i + 1]]);
        }
        cnt++;
    } while (next_permutation(a.begin(), a.end()));

    cout<<fixed << setprecision(15)<<endl;
    cout<< ans/cnt << endl;
}