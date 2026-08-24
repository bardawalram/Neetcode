class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(2*nums.size());
        int n=nums.size();
        for(int i=0;i<2*n;i++){
            ans[i]=nums[i%n];
        }
       
        return ans;
        
    }
};