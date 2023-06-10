class Solution {
public:
	bool isValidSudoku(vector<vector<char>> &board) {
		for (int i = 0; i < 9; i++) {
			vector<int> v(9, 0);
			for (int j = 0; j < 9; j++) {
				char x = board[i][j];
				if (x != '.') {
					v[x - '1']++;
				} else {
					continue;
				}
				if (v[x - '1'] > 1) {
					return false;
				}
			}
		}
		for (int i = 0; i < 9; i++) {
			vector<int> v(9, 0);
			for (int j = 0; j < 9; j++) {
				char x = board[j][i];
				if (x != '.') {
					v[x - '1']++;
				} else {
					continue;
				}
				if (v[x - '1'] > 1) {
					return false;
				}
			}
		}
		for (int i = 0; i < 9; i++) {
			int a = (i / 3) * 3, b = (i % 3) * 3;
			vector<int> v(9, 0);
			for (int j = a; j < 3 + a; j++) {
				for (int k = b; k < 3 + b; k++) {
					char x = board[j][k];
					if (x != '.') {
						v[x - '1']++;
					} else {
						continue;
					}
					if (v[x - '1'] > 1) {
						return false;
					}
				}
			}
		}
		return true;
	}
};