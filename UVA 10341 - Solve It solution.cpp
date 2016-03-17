//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

int p, q, r, s, t, u;
double solve(double i) {
	return ((p * exp(-i)) + (q * sin(i)) + (r * cos(i)) + (s * tan(i))
			+ (t * i * i) + (u));
}

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 10341 - Solve It
	double l, rr, mid;
	while (cin >> p >> q >> r >> s >> t >> u) {
		if (solve(0) * solve(1) > 0)
			printf("No solution\n");
		else {
			l = 0, rr = 1;
			while (l + (1e-7) < rr) {
				mid = (l + rr) / 2;
				if (solve(mid) * solve(l) > 0)
					l = mid;
				else
					rr = mid;
			}
			printf("%0.4f\n", (l + rr) / 2);
		}
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
