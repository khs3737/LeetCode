class Solution {
  public:
	vector<int> spiralOrder(vector<vector<int>> &matrix) {
		int n = matrix.size();
		int m = matrix[0].size();
		int i = 0, j = 0;
		vector<int> dx = {1, 0, -1, 0};
		vector<int> dy = {0, 1, 0, -1};
		vector<int> ans;
		int dir = 0;
		for (int k = 0; k < n * m; k++) {
			ans.push_back(matrix[i][j]);
			matrix[i][j] = 9999;
			int nx = j + dx[dir];
			int ny = i + dy[dir];
			if (nx >= m || nx < 0 || ny >= n || ny < 0 ||
				matrix[ny][nx] == 9999) {
				dir = (dir + 1) % 4;
			}
			j += dx[dir];
			i += dy[dir];
		}
		return ans;
	}
};