class Solution {
public:
	string getLine(vector<string> &words, int maxWidth, int totalLength,
				   bool isLast) {
		string line = "";
		int totalSpace = maxWidth - totalLength;
		int m = words.size();

		if (isLast) {
			for (int j = 0; j < m; j++) {
				line.append(words[j]);
				if (j == m - 1) {
					break;
				}

				line.push_back(' ');
			}
			int lineLength = line.size();
			for (int i = 0; i < maxWidth - lineLength; i++) {
				line.push_back(' ');
			}
			return line;
		}

		if (words.size() == 1) {
			line.append(words[0]);
			for (int i = 0; i < totalSpace; i++) {
				line.push_back(' ');
			}
			return line;
		}

		for (int j = 0; j < m; j++) {
			line.append(words[j]);

			if (j == m - 1) {
				break;
			}
			int space =
				totalSpace / (m - 1) + ((j < totalSpace % (m - 1)) ? 1 : 0);
			for (int k = 0; k < space; k++) {
				line.push_back(' ');
			}
		}
		return line;
	}
	vector<string> fullJustify(vector<string> &words, int maxWidth) {
		int n = words.size();
		vector<string> answer;
		vector<vector<string>> wordsGroups;
		vector<int> lengths;
		vector<string> tempGroup;
		int tempLength = 0;
		for (int i = 0; i < n;) {
			int targetSize = words[i].size();
			if (tempLength != 0) {
				targetSize++;
			}
			if (maxWidth - tempLength - targetSize >= 0) {
				tempGroup.push_back(words[i]);
				tempLength += targetSize;
				i++;
			} else {
				wordsGroups.push_back(tempGroup);
				lengths.push_back(tempLength);
				tempGroup = {};
				tempLength = 0;
			}
		}
		if (!tempGroup.empty()) {
			wordsGroups.push_back(tempGroup);
			lengths.push_back(tempLength);
		}

		for (int i = 0; i < wordsGroups.size(); i++) {
			answer.push_back(getLine(wordsGroups[i], maxWidth,
									 lengths[i] - wordsGroups[i].size() + 1,
									 i == (wordsGroups.size() - 1)));
		}
		return answer;
	}
};