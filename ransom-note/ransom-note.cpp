class Solution {
  public:
	bool canConstruct(string ransomNote, string magazine) {
		multiset<int> s;
		for (int i = 0; i < magazine.size(); i++) {
			s.insert(magazine[i]);
		}
		for (int i = 0; i < ransomNote.size(); i++) {
			multiset<int>::iterator it = s.find(ransomNote[i]);
			if (it != s.end()) {
				s.erase(it);
			} else {
				cout << i;
				return false;
			}
		}
		return true;
	}
};