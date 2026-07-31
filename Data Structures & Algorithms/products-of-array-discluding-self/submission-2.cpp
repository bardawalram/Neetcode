class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int z=0,zi=-1;
        int n=nums.size();
        int prod=1;
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                z++;
                zi=i;
            }
            else{
                prod*=nums[i];
            }
        }
        if(z>1)return ans;
        else if(z==1){
            ans[zi]=prod;
        }
        else{
            for(int i=0;i<n;i++){
                ans[i]=prod/nums[i];
            }
        }
return ans;
    }
};
