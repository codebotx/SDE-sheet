class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> v;
        int cnt;
        for (int i=0;i<nums.size();i++){
            if(nums[i]==1)
                cnt++;
            else
                cnt=0;
            v.push_back(cnt);
        }
        return *max_element(v.begin(), v.end());
        
    }
};
