class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        sort(nums.begin() , nums.end());

        for(int i=1;i<n; i++){
            int start =nums[i-1]+1;

            while(start<nums[i]){
                ans.push_back(start);
                start++;
            }
        }
        return ans;
    }
};