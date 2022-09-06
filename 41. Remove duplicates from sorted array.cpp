class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        for (int i = 0; i <nums.size(); i++){
            if(s.find(nums[i])==s.end())
                s.insert(nums[i]);
            else{
                nums.erase(nums.begin()+i);
                i--;
            }
        }
    vector<int> nums(s.begin(),s.end());
        return s.size();
    }
};
