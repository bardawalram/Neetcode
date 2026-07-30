class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }
        sort(arr.begin(),arr.end());//sort first based one the key if both the key are same then see for the indexs
        int i=0,j=nums.size()-1;
        while(i<j){
            int sum=arr[i].first+arr[j].first;
            if(sum==target){
                return {min(arr[i].second,arr[j].second), max(arr[i].second,arr[j].second)};
            }
            else if(sum<target){
                i++;
            }
            else{
                j--;
            }
        }
        return {};
    }
};
