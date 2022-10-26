class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size()==0)
            res.push_back(nums);
        
        else if(nums.size()>=1){
					int add = nums[nums.size()-1];
					nums.pop_back();
					vector<vector<int>> temp = subsetsWithDup(nums);
					res = temp;
          set<vector<int>> s (temp.begin(),temp.end());
					for(int i =0;i<temp.size();i++){
						vector<int> t = temp[i];
						t.push_back(add);
                        sort(t.begin(),t.end());
						s.insert(t);
						}
					res.assign(s.begin(),s.end());
						}
				return res;														
				}
};
