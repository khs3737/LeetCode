class Solution {
  public:
	void setZeroes(vector<vector<int>> &matrix) {
		set<int> sx;
		set<int> sy;
		int n = matrix.size();
		int m = matrix[0].size();
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (matrix[i][j] == 0) {
					sx.insert(j);
					sy.insert(i);
				}
			}
		}
		for (int i = 0; i < n; i++) {
			if (sy.find(i) != sy.end()) {
				for (int j = 0; j < m; j++) {
					matrix[i][j] = 0;
				}
			}
		}
		for (int j = 0; j < m; j++) {
			if (sx.find(j) != sx.end()) {
				for (int i = 0; i < n; i++) {
					matrix[i][j] = 0;
				}
			}
		}
	}
};