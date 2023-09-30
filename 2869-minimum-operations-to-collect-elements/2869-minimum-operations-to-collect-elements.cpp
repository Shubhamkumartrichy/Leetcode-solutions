class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> s;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<=k){
                s.insert(nums[i]);
                if(s.size()==k){
                    return nums.size()-i;
                }
            }
        }
        return nums.size();
    }
};