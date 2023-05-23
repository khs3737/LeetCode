class RandomizedSet {
  public:
	vector<int> v;
	unordered_map<int, int> um;
	random_device rd;

	RandomizedSet() {}

	bool insert(int val) {
		if (um.find(val) != um.end()) {
			return false;
		}
		um.insert({val, v.size()});
		v.push_back(val);
		return true;
	}

	bool remove(int val) {
		if (um.find(val) == um.end()) {
			return false;
		}
		int targetIdx = um[val];
		v[targetIdx] = v[v.size() - 1];
		v.pop_back();
		um[v[targetIdx]] = targetIdx;
		um.erase(val);
		return true;
	}

	int getRandom() {
		int r = rd() % v.size();
		return v[r];
	}
};
