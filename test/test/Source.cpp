#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<sstream>
#include<algorithm>
#include<stdio.h>
#include <cstring>
#include<functional>
#include<queue>
#include<iterator>
using namespace std;
int arr[1001];
int n, d;
short ind[1000001];
int mn, mx;
int main()
{
	while (cin >> n >> d) {
		mn = mx = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] < arr[mn]) {
				mn = i;
			}
			if (arr[i] > arr[mx]) {
				mx = i;
			}
			ind[arr[i]] = i;
		}
		bool neg = mn > mx;
		int l = 1, h = d, m;
		while (l <= h) {
			m = (l + h) / 2;
			if (check(m*(neg*-1))) {
				l = m + 1;
			}
			else {
				h = m - 1;
			}
		}
		cout << h << endl;
	}
	return 0;
}