/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc023/submissions/35823391
 * Submitted at: 2022-10-21 04:05:31
 * Problem URL: https://atcoder.jp/contests/abc023/tasks/abc023_d
 * Result: AC
 * Execution Time: 395 ms
 */

#include <bits/stdc++.h>
using namespace std;
const long long INFL = 10000000000000000;

int main()
{
	int N;
	cin >> N;
	vector<long long> H(N), S(N);
	for (int i = 0; i < N; i++)
		cin >> H[i] >> S[i];
	
	long long tv = INFL, fv = -1;
	while (tv - fv > 1)
    {
		long long mid = (tv + fv) / 2;
		vector<long long> t(N);
		for (int i = 0; i < N; i++)
			t[i] = (mid - H[i]) / S[i];
		sort(t.begin(), t.end());
		bool ok = true;
		for (int i = 0; i < N; i++)
        {
			if (mid < H[i] || i > t[i])
				ok = false;
		}
		if (ok)
			tv = mid;
		else
			fv = mid;
	}
	cout << tv << endl;
}