class Solution {
  public:
	void rotate(vector<vector<int>> &matrix) {
		int n = matrix.size();
		for (int i = 0; i < n / 2 + n % 2; i++) {
			for (int j = 0; j < n / 2; j++) {
				vector<int> temp;
				temp.push_back(matrix[n - 1 - j][i]);
				temp.push_back(matrix[i][j]);
				temp.push_back(matrix[j][n - 1 - i]);
				temp.push_back(matrix[n - 1 - i][n - 1 - j]);
				matrix[i][j] = temp[0];
				matrix[j][n - 1 - i] = temp[1];
				matrix[n - 1 - i][n - 1 - j] = temp[2];
				matrix[n - 1 - j][i] = temp[3];
			}
		}
	}
};