#include <iostream>
#include <vector>
using namespace std;
void line(vector<int>v, int n) {
	vector<int>l(n, 0);
	for (int i = n - 1; i >= 0; i--) {
		l.insert(l.begin() +v[i], i + 1);
	}

	for (int i = 0; i < n; i++) {
		cout << l[i]<<" ";
	}
}
int main(void)
{
	int n; cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		v.push_back(a);
	}

	line(v, n);
	return 0;
}