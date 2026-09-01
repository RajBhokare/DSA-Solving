class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n =nums.size();
        vector<int> ans;
        sort(nums.begin(), nums.end());

        for (int i=1; i<n; i++) {
            int start = nums[i-1] + 1;

            while (start <nums[i]) {
                ans.push_back(start);
                start++;
            }
        }
        return ans;
    }
};