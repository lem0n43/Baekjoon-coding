#include <iostream>
#include <vector>
using namespace std;
char word(char a) {
	if (a == 'B') return 'W';
	else return 'B';
}
int black(vector<vector<char>>v, int stn, int stm, char st) {
	int cnt = 0;
	char posi = st;
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) posi = st;
		else {
			if (st == 'B') posi = 'W';
			else posi = 'B';
		}
		for (int j = 0; j < 8; j++) {
			if (v[stn + i][stm + j] != posi)
				cnt++;
			posi = word(posi);
		}
	}
	return cnt;
}

int checking(vector<vector<char>>v, int stn, int stm) {
	int first = black(v, stn, stm, 'B');
	int sec = black(v, stn, stm, 'W');
	return sec > first ? first : sec;
}
int main(void)
{
	int M, N;
	cin >> N >> M;
	vector<vector<char>>v(N,vector<char>(M,'a'));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			char a;
			cin >> a;
			v[i][j]=a;
		}
	}

	int min = 64;
	for (int i = 0; i < N-7; i++) {
		for (int j = 0; j < M-7; j++) {
			int temp = checking(v,i,j);
			if (min > temp) {
				min = temp;
			}
		}
	}

	cout << min << "\n";
	return 0;
}

