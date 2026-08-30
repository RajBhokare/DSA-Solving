class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int min_i=0;
        int max_i=0;

        for(int i=1;i<n; i++){
            if(nums[i]<nums[min_i]){
                min_i =i;
            }
            if(nums[i]> nums[max_i]){
                max_i=i;
            }
        }
        int a = min(min_i,max_i);
        int b=  max(min_i,max_i);

        int left=b+1;
        int right = n-a;
        int both = (a+1) +(n-b);

        return min({left, right,both});
    }
};