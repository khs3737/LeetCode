class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        // 이분탐색으로 최솟값 index 구하기
        int minIndex = 0;
        if(nums[0] > nums[n-1]){
            int l=0,r=n-1;
            while(l<=r){
                int m = (l + r) / 2;
                if(m > 0 && nums[m]<nums[m-1]){
                    minIndex = m;
                    break;
                } else if(nums[m] >= nums[0]){
                    l = m + 1;
                } else{
                    r = m - 1;
                }
            }
        }
        // 이분탐색으로 target 찾기
        int l, r;
        if(nums[0] <= nums[n-1]){
            l = 0;
            r = n - 1;
        }
        else if(target >= nums[0]){
            l = 0;
            r = minIndex - 1;
        } else{
            l = minIndex;
            r = n - 1;
        }
        while(l <= r){
            int m = (l + r) / 2;
            if(nums[m] == target){
                return m;
            } else if(nums[m] > target){
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return -1;
    }
};