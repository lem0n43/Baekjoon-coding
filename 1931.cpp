#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int>a, pair<int, int>b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(void)
{
	int n;
	vector<pair<int, int>>v;
	cin >> n;
	int num = n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	int cnt = 0;
	sort(v.begin(), v.end(), comp);
	int time = 0;
	for (int i = 0; i < num; i++) {
		if (time <= v[i].first) {
			cnt++;
			time = v[i].second;
		}
	}
	
	cout << cnt << "\n";
	
	return 0;
}