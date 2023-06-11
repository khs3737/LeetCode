class Solution {
  public:
	bool isValid(string s) {
		stack<int> st;
		int n = s.size();
		for (int i = 0; i < n; i++) {
			switch (s[i]) {
			case '[':
			case '{':
			case '(':
				st.push(s[i]);
				break;
			case ']':
				if (!st.empty() && st.top() == '[') {
					st.pop();
					break;
				} else {
					return false;
				}
			case '}':
				if (!st.empty() && st.top() == '{') {
					st.pop();
					break;
				} else {
					return false;
				}
			case ')':
				if (!st.empty() && st.top() == '(') {
					st.pop();
					break;
				} else {
					return false;
				}
			}
		}
		return st.empty();
	}
};