class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n =digits.length();

        if(digits.empty()){
            return {};
        }

        string mp[]{
            "", "","abc" ,"def","ghi", "jkl", "mno","pqrs","tuv","wxyz"
        };

        vector<string> ans={""};

        for(char d: digits){
            vector<string> temp;

            for(string s: ans){
                for(char c: mp[d-'0']){
                    temp.push_back(s+c);
                }
            }
            ans=temp;
        }
        return ans;
    }
};