class Solution {
    public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> beforeCount;
        vector<vector<int>> afterList;
        for (int i = 0; i < numCourses; i++) {
            vector<int> temp;
            beforeCount.push_back(0);
            afterList.push_back(temp);
        }
        for (int i = 0; i < prerequisites.size(); i++) {
            beforeCount[prerequisites[i][1]]++;
            afterList[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }

        queue<int> q;
        for (int i = 0; i < numCourses; i++) {
            if (beforeCount[i] == 0) {
                q.push(i);
            }
        }
        vector<int> answer;
        while (q.size() > 0) {
            int x = q.front();
            q.pop();
            answer.push_back(x);
            for (int i = 0; i < afterList[x].size(); i++) {
                int target = afterList[x][i];
                beforeCount[target]--;
                if (beforeCount[target] == 0) {
                    q.push(target);
                }
            }
        }
        for (int i = 0; i < numCourses; i++) {
            if (beforeCount[i] > 0) {
                vector<int> temp;
                return temp;
            }
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};