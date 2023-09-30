class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for (auto x : mp){
            if(x.second==1){
                return -1;
            }else{
                while(x.second>0){
                    if(x.second==4 || x.second==2){
                        x.second-=2;
                        ans++;
                    }else{
                        x.second-=3;
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};