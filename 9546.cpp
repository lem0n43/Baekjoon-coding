#include <iostream>
using namespace std;

int main(void)
{
	int T, K; cin >> T;

	while (T--) {
		cin >> K;
		int cnt = 0;
		while (K--) {
			cnt = 2 * (cnt + 0.5);
		}
		cout << cnt << "\n";
	}
	return 0;


}