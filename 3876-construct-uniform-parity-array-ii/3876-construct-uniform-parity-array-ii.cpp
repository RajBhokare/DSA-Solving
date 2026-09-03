class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int minodd= INT_MAX;
        int mineven=INT_MAX;

        for(int i=0;i<n; i++){
            if(nums1[i]%2 ==0){
                mineven = min(mineven, nums1[i]);
            }
            else{
                minodd= min(minodd, nums1[i]);
            }
        }
        if(minodd==INT_MAX ||mineven==INT_MAX){
            return true;
        }
        return minodd < mineven;
    }
};